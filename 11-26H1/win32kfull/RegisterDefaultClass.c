/*
 * XREFs of RegisterDefaultClass @ 0x1402A2BB4
 * Callers:
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     NtUserGetClassInfoEx @ 0x1402B2550 (NtUserGetClassInfoEx.c)
 *     NtUserRegisterClassExWOW @ 0x1402B9700 (NtUserRegisterClassExWOW.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     InternalRegisterClassEx @ 0x14014E310 (InternalRegisterClassEx.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall RegisterDefaultClass(wchar_t *Str1)
{
  __int64 v2; // rcx
  struct tagTHREADINFO *v3; // r15
  signed __int32 v4; // eax
  int v5; // r12d
  int IntegerAtom; // r8d
  unsigned int i; // edi
  __int64 v8; // rdx
  __int64 UserSessionState; // rax
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  const wchar_t *v14; // rdx
  unsigned __int16 v15; // dx
  __int64 result; // rax
  _BYTE v17[4]; // [rsp+20h] [rbp-60h] BYREF
  int v18; // [rsp+24h] [rbp-5Ch]
  __int64 v19; // [rsp+28h] [rbp-58h]
  int v20; // [rsp+30h] [rbp-50h]
  int v21; // [rsp+34h] [rbp-4Ch]
  void *v22; // [rsp+38h] [rbp-48h]
  __int64 v23; // [rsp+40h] [rbp-40h]
  __int64 v24; // [rsp+48h] [rbp-38h]
  __int64 v25; // [rsp+50h] [rbp-30h]
  __int64 v26; // [rsp+58h] [rbp-28h]
  __int64 v27; // [rsp+60h] [rbp-20h]
  __int64 v28; // [rsp+68h] [rbp-18h]
  __int64 v29; // [rsp+70h] [rbp-10h]
  int v30; // [rsp+78h] [rbp-8h]
  int v31; // [rsp+7Ch] [rbp-4h]
  __int16 v32; // [rsp+C0h] [rbp+40h] BYREF
  int v33; // [rsp+C8h] [rbp+48h]
  signed __int32 v34; // [rsp+D0h] [rbp+50h]

  memset_0(v17, 0, 0x60uLL);
  v3 = PtiCurrent(v2);
  v4 = _InterlockedCompareExchange((volatile signed __int32 *)v3 + 130, 0, 0) & 4;
  v34 = v4;
  v5 = 1;
  if ( ((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v32 = 0;
    IntegerAtom = (unsigned __int8)RtlGetIntegerAtom(Str1, &v32);
    v4 = v34;
  }
  else
  {
    IntegerAtom = 1;
    v32 = (__int16)Str1;
  }
  v33 = IntegerAtom;
  for ( i = 0; ; ++i )
  {
    if ( i >= 5 )
    {
      if ( v5 )
        *(_DWORD *)(*((_QWORD *)v3 + 57) + 12LL) |= 0x2000u;
      return 1LL;
    }
    if ( !v4 || (gDefaultServerClasses[12 * i] & 1) != 0 )
    {
      v8 = (unsigned int)(*(_DWORD *)(*((_QWORD *)v3 + 57) + 832LL) >> i);
      if ( (v8 & 1) == 0 )
        break;
    }
LABEL_16:
    IntegerAtom = v33;
    v4 = v34;
  }
  v5 = 0;
  if ( IntegerAtom )
  {
    UserSessionState = W32GetUserSessionState(i, v8);
    if ( v32 == *(_WORD *)(*(_QWORD *)(UserSessionState + 19904)
                         + 2LL * (((unsigned int)gDefaultServerClasses[12 * i] >> 3) & 0x1F)
                         + 868) )
      goto LABEL_11;
    goto LABEL_16;
  }
  v14 = *(const wchar_t **)&gDefaultServerClasses[12 * i + 10];
  if ( ((unsigned __int64)v14 & 0xFFFFFFFFFFFF0000uLL) == 0 || _wcsicmp(Str1, v14) )
    goto LABEL_16;
LABEL_11:
  v20 = 0;
  v18 = gDefaultServerClasses[12 * i + 2];
  v19 = *(_QWORD *)&gDefaultServerClasses[12 * i + 4];
  v30 = gDefaultServerClasses[12 * i + 6];
  v11 = gDefaultServerClasses[12 * i];
  v22 = hModuleWin;
  v23 = 0LL;
  v28 = 0LL;
  v26 = 0LL;
  v21 = 0;
  v31 = 1;
  if ( (v11 & 2) != 0 && *(_QWORD *)(W32GetUserSessionState(hModuleWin, v10) + 21912) )
    v24 = **(_QWORD **)(W32GetUserSessionState(v13, v12) + 21912);
  else
    v24 = 0LL;
  v15 = gDefaultServerClasses[12 * i + 1];
  v25 = *(_QWORD *)&gDefaultServerClasses[12 * i + 8];
  v27 = *(_QWORD *)&gDefaultServerClasses[12 * i + 10];
  v29 = v27;
  result = InternalRegisterClassEx((__int64)v17, v15, HIWORD(gDefaultServerClasses[12 * i + 1]) | 0x41u, 0LL);
  if ( result )
  {
    *(_DWORD *)(*((_QWORD *)v3 + 57) + 832LL) |= 1 << i;
    return 1LL;
  }
  return result;
}
