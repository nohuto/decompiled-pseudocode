/*
 * XREFs of NtAddAtomEx @ 0x14045FD74
 * Callers:
 *     NtAddAtom @ 0x1406740D4 (NtAddAtom.c)
 * Callees:
 *     RtlAddAtomToAtomTableEx @ 0x140099D18 (RtlAddAtomToAtomTableEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExCallCallBack @ 0x1403F6504 (ExCallCallBack.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtAddAtomEx(char *Src, size_t Size, _WORD *a3, unsigned int a4)
{
  size_t v6; // rbx
  char PreviousMode; // r15
  char *v9; // r14
  _WORD *v10; // rcx
  __int64 result; // rax
  __int16 v12; // [rsp+20h] [rbp-268h] BYREF
  __int64 v13; // [rsp+28h] [rbp-260h] BYREF
  char *v14; // [rsp+30h] [rbp-258h]
  _WORD v15[256]; // [rsp+40h] [rbp-248h] BYREF

  v6 = (unsigned int)Size;
  v13 = 0LL;
  if ( (a4 & 0xFFFFFFFD) != 0 )
    return 3221225485LL;
  ExCallCallBack((__int64)Src, 2LL, (__int64)&v13);
  if ( !v13 )
    return 3221225506LL;
  if ( (unsigned int)v6 > 0x1FE )
    return 3221225485LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = Src;
  v14 = Src;
  if ( PreviousMode )
  {
    if ( a3 )
    {
      v10 = a3;
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        v10 = (_WORD *)MmUserProbeAddress;
      *v10 = *v10;
      v9 = v14;
    }
    if ( Src )
    {
      if ( (_DWORD)v6 )
      {
        if ( ((unsigned __int8)Src & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&Src[v6] > MmUserProbeAddress || &Src[v6] < Src )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      v9 = (char *)v15;
      v14 = (char *)v15;
      memmove(v15, Src, v6);
      v15[v6 >> 1] = 0;
    }
  }
  LODWORD(result) = RtlAddAtomToAtomTableEx(v13, v9, &v12, a4);
  if ( a3 )
  {
    if ( (int)result >= 0 )
      *a3 = v12;
  }
  return (unsigned int)result;
}
