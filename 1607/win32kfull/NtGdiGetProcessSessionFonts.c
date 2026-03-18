/*
 * XREFs of NtGdiGetProcessSessionFonts @ 0x1C00FD6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1C00FD9FC (-GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall NtGdiGetProcessSessionFonts(
        void *a1,
        volatile void *a2,
        unsigned int *a3,
        volatile void *a4,
        unsigned int *a5)
{
  PVOID PoolWithTag; // rdi
  unsigned __int16 *v6; // r14
  bool v7; // r15
  unsigned int v8; // esi
  unsigned int v9; // eax
  SIZE_T v10; // rbx
  SIZE_T v11; // r12
  char v12; // r12
  int ProcessSessionFonts; // ebx
  PVOID v14; // r13
  HANDLE *v16; // r15
  __int64 v17; // r12
  ULONG v18; // eax
  char v19; // [rsp+41h] [rbp-87h]
  unsigned int v20; // [rsp+44h] [rbp-84h] BYREF
  PVOID Object; // [rsp+48h] [rbp-80h] BYREF
  unsigned int v22; // [rsp+50h] [rbp-78h]
  unsigned int v23; // [rsp+54h] [rbp-74h] BYREF
  unsigned int v24; // [rsp+58h] [rbp-70h]
  PVOID v25; // [rsp+60h] [rbp-68h]
  PVOID P; // [rsp+68h] [rbp-60h]
  unsigned __int16 *v27; // [rsp+70h] [rbp-58h]
  unsigned int v28; // [rsp+78h] [rbp-50h]
  unsigned int v29; // [rsp+7Ch] [rbp-4Ch]
  SIZE_T v30; // [rsp+80h] [rbp-48h]
  SIZE_T v31; // [rsp+88h] [rbp-40h]
  void *v35; // [rsp+E8h] [rbp+20h]

  v35 = (void *)a4;
  v25 = 0LL;
  PoolWithTag = 0LL;
  P = 0LL;
  v6 = 0LL;
  v27 = 0LL;
  v7 = 0;
  if ( gSessionId )
    return 0LL;
  if ( ((unsigned __int8)a3 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)(a3 + 1) > W32UserProbeAddress || a3 + 1 < a3 )
    *W32UserProbeAddress = 0;
  if ( ((unsigned __int8)a5 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)(a5 + 1) > W32UserProbeAddress || a5 + 1 < a5 )
    *W32UserProbeAddress = 0;
  v8 = *a3;
  v24 = v8;
  v28 = v8;
  v9 = *a5;
  v22 = v9;
  v29 = v9;
  v10 = 8LL * v8;
  v30 = v10;
  if ( v10 > 0xFFFFFFFF || (v11 = 2LL * v9, v31 = v11, v11 > 0xFFFFFFFF) )
    ExRaiseStatus(-1073741675);
  if ( (_DWORD)v10 )
  {
    ProbeForWrite(a2, (unsigned int)v10, 4u);
    a4 = v35;
  }
  if ( (_DWORD)v11 )
    ProbeForWrite(a4, (unsigned int)v11, 4u);
  if ( v8 )
  {
    v19 = 0;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x706D7447u);
    P = PoolWithTag;
    if ( PoolWithTag )
    {
      v6 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, v11, 0x706D7447u);
      v27 = v6;
      if ( v6 )
      {
        v12 = 0;
        goto LABEL_24;
      }
    }
    ProcessSessionFonts = -1073741801;
  }
  else
  {
    v12 = 1;
    v19 = 1;
    if ( !a2 && !v35 && !v22 )
    {
LABEL_24:
      ProcessSessionFonts = ObReferenceObjectByHandle(a1, 0x40u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
      v25 = Object;
      if ( ProcessSessionFonts < 0 )
      {
        v14 = Object;
      }
      else
      {
        ProcessSessionFonts = GetProcessSessionFonts(
                                (struct _EPROCESS *)Object,
                                v24,
                                v22,
                                &v20,
                                &v23,
                                (void **)PoolWithTag,
                                v6);
        if ( ProcessSessionFonts >= 0 )
          v7 = v12 == 0;
        ProbeForWrite(a3, 4uLL, 4u);
        ProbeForWrite(a5, 4uLL, 4u);
        if ( (int)(ProcessSessionFonts + 0x80000000) < 0 || ProcessSessionFonts == -1073741789 )
        {
          *a3 = v20;
          *a5 = v23;
        }
        if ( ProcessSessionFonts < 0 || v19 )
        {
          v14 = Object;
        }
        else
        {
          memmove((void *)a2, PoolWithTag, 8LL * v20);
          memmove(v35, v6, 2LL * v23);
          v14 = Object;
        }
      }
      if ( ProcessSessionFonts >= 0 )
        goto LABEL_35;
      goto LABEL_52;
    }
    ProcessSessionFonts = -1073741811;
  }
  v14 = 0LL;
LABEL_52:
  if ( v7 && v20 )
  {
    v16 = (HANDLE *)PoolWithTag;
    v17 = v20;
    do
    {
      NtClose(*v16++);
      --v17;
    }
    while ( v17 );
  }
LABEL_35:
  if ( v14 )
    ObfDereferenceObject(v14);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x706D7447u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x706D7447u);
  if ( ProcessSessionFonts < 0 )
  {
    v18 = RtlNtStatusToDosErrorNoTeb(ProcessSessionFonts);
    EngSetLastError(v18);
  }
  return (unsigned int)ProcessSessionFonts;
}
