/*
 * XREFs of NtGdiGetProcessSessionFonts @ 0x14021EED0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x14021F2C4 (-GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z.c)
 */

__int64 __fastcall NtGdiGetProcessSessionFonts(void *a1, void *a2, void *a3, void *a4, void *a5)
{
  PVOID v6; // r13
  void **v7; // rsi
  unsigned __int16 *v8; // r15
  bool v9; // r14
  int CurrentServiceSessionId; // ebx
  __int64 v11; // rcx
  char v12; // al
  int v13; // ebx
  int ProcessSessionFonts; // eax
  __int64 i; // r14
  __int64 v17; // r8
  ULONG v18; // eax
  char v19; // [rsp+40h] [rbp-78h]
  unsigned int v20; // [rsp+44h] [rbp-74h] BYREF
  unsigned int v21; // [rsp+48h] [rbp-70h] BYREF
  unsigned int v22; // [rsp+4Ch] [rbp-6Ch] BYREF
  unsigned int v23; // [rsp+50h] [rbp-68h] BYREF
  PVOID v24; // [rsp+58h] [rbp-60h]
  void **v25; // [rsp+60h] [rbp-58h]
  unsigned __int16 *v26; // [rsp+68h] [rbp-50h]
  PVOID Object; // [rsp+70h] [rbp-48h] BYREF
  unsigned __int64 v28; // [rsp+78h] [rbp-40h]

  v21 = 0;
  v23 = 0;
  v22 = 0;
  v20 = 0;
  v6 = 0LL;
  v24 = 0LL;
  v7 = 0LL;
  v25 = 0LL;
  v8 = 0LL;
  v26 = 0LL;
  v9 = 0;
  CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
  if ( (unsigned int)W32GetCurrentWin32kSessionId(v11) != CurrentServiceSessionId )
    return 0LL;
  GreProbeAndReadFromUntrustedVa(&v22, 4uLL, a3, 4uLL, 4uLL);
  GreProbeAndReadFromUntrustedVa(&v20, 4uLL, a5, 4uLL, 4uLL);
  Object = (PVOID)(8LL * v22);
  if ( (unsigned __int64)Object > 0xFFFFFFFF || (v28 = 2LL * v20, v28 > 0xFFFFFFFF) )
    ExRaiseStatus(-1073741675);
  if ( v22 )
  {
    v12 = 0;
    v19 = 0;
  }
  else
  {
    v12 = 1;
    v19 = 1;
    if ( a2 || a4 || v20 )
    {
      v13 = -1073741811;
      goto LABEL_31;
    }
  }
  if ( v12
    || (v7 = (void **)PALLOCMEM(8 * v22, 1886221383LL), (v25 = v7) != 0LL)
    && (v8 = (unsigned __int16 *)PALLOCNOZ(2 * v20, 1886221383LL, v17), (v26 = v8) != 0LL) )
  {
    Object = 0LL;
    v13 = ObReferenceObjectByHandle(a1, 0x40u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    v6 = Object;
    v24 = Object;
    if ( v13 >= 0 )
    {
      ProcessSessionFonts = GetProcessSessionFonts((PRKPROCESS)Object, v22, v20, &v21, &v23, v7, v8);
      v13 = ProcessSessionFonts;
      if ( ProcessSessionFonts >= 0 )
        v9 = v19 == 0;
      if ( (int)(ProcessSessionFonts + 0x80000000) < 0 || ProcessSessionFonts == -1073741789 )
      {
        GreProbeAndWriteToUntrustedVa(a3, 4uLL, &v21, 4uLL, 4uLL);
        GreProbeAndWriteToUntrustedVa(a5, 4uLL, &v23, 4uLL, 4uLL);
      }
      if ( v13 >= 0 && !v19 )
      {
        GreProbeAndWriteToUntrustedVa(a2, 8LL * v22, v7, 8LL * v21, 4uLL);
        GreProbeAndWriteToUntrustedVa(a4, 2LL * v20, v8, 2LL * v23, 4uLL);
      }
    }
    if ( v13 >= 0 )
      goto LABEL_18;
  }
  else
  {
    v13 = -1073741801;
  }
LABEL_31:
  if ( v9 )
  {
    for ( i = 0LL; (unsigned int)i < v21; i = (unsigned int)(i + 1) )
      NtClose(v7[i]);
  }
LABEL_18:
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( v7 )
    Win32FreePool(v7);
  if ( v8 )
    Win32FreePool(v8);
  if ( v13 < 0 )
  {
    v18 = RtlNtStatusToDosErrorNoTeb(v13);
    EngSetLastError(v18);
  }
  return (unsigned int)v13;
}
