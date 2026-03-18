/*
 * XREFs of ProbeAndCaptureSoftKbdData @ 0x1C01D9E28
 * Callers:
 *     NtUserfnIMECONTROL @ 0x1C021C530 (NtUserfnIMECONTROL.c)
 * Callees:
 *     UIntAdd @ 0x1C0070A70 (UIntAdd.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

unsigned int *__fastcall ProbeAndCaptureSoftKbdData(char *Src)
{
  unsigned int *v2; // rax
  unsigned int v3; // r14d
  unsigned __int64 v4; // rcx
  char *v5; // r8
  UINT v7; // esi
  unsigned int *v8; // rax
  unsigned int *v9; // rbx
  UINT puResult; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v11; // [rsp+70h] [rbp+18h]
  unsigned __int64 v12; // [rsp+78h] [rbp+20h]

  v2 = (unsigned int *)Src;
  if ( (unsigned __int64)Src >= W32UserProbeAddress )
    v2 = (unsigned int *)W32UserProbeAddress;
  v11 = *v2;
  v3 = v11;
  v4 = (unsigned __int64)v11 << 9;
  if ( v4 )
  {
    if ( ((unsigned __int8)Src & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = &Src[v4 + 4];
    if ( (unsigned __int64)v5 > W32UserProbeAddress || v5 < Src + 4 )
      *W32UserProbeAddress = 0;
  }
  v12 = v4;
  if ( v4 > 0xFFFFFFFF )
    return 0LL;
  puResult = v4;
  if ( UIntAdd(v4, 4u, &puResult) < 0 )
    return 0LL;
  v7 = puResult;
  v8 = (unsigned int *)Win32AllocPool(puResult, 1835627349LL);
  v9 = v8;
  if ( !v8 )
    ExRaiseStatus(-1073741801);
  memmove(v8, Src, v7);
  *v9 = v3;
  return v9;
}
