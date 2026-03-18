/*
 * XREFs of MiCaptureDeleteHierarchy @ 0x1400F1960
 * Callers:
 *     MiDeletePartialVad @ 0x1400F14D0 (MiDeletePartialVad.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x14005E6FC (MiMakeSystemAddressValid.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 */

char __fastcall MiCaptureDeleteHierarchy(unsigned __int64 a1, unsigned __int64 a2, unsigned __int8 a3, _DWORD *a4)
{
  _BYTE *v4; // rsi
  __int64 v7; // rbp
  int v8; // eax
  unsigned __int64 v9; // rcx
  unsigned __int64 *v10; // rdx
  unsigned int v11; // ebx
  unsigned __int64 *v12; // rdi
  unsigned __int64 v13; // r10
  unsigned __int64 CurrentThread; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  char v18; // [rsp+30h] [rbp-48h] BYREF
  char v19; // [rsp+40h] [rbp-38h] BYREF

  *a4 = 0;
  v4 = a4;
  v7 = 2LL;
  do
  {
    v8 = 3;
    v9 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v10 = (unsigned __int64 *)&v19;
    do
    {
      *v10-- = v9;
      v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v8;
    }
    while ( v8 );
    v11 = 0;
    v12 = (unsigned __int64 *)&v18;
    while ( 1 )
    {
      v13 = *v12;
      CurrentThread = *v12 + 0x90482413000LL;
      v15 = *(_QWORD *)*v12;
      if ( CurrentThread <= 0x7F8 )
      {
        LODWORD(CurrentThread) = MiPteHasShadow(v9, v15);
        if ( (_DWORD)CurrentThread )
        {
          if ( (v15 & 1) != 0 && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
          {
            CurrentThread = (unsigned __int64)KeGetCurrentThread();
            v9 = *(_QWORD *)(CurrentThread + 184);
            v16 = *(_QWORD *)(v9 + 1520);
            if ( v16 )
            {
              CurrentThread = *(_QWORD *)(v16 + 8 * ((v13 >> 3) & 0x1FF));
              if ( (CurrentThread & 0x20) != 0 )
                v15 |= 0x20uLL;
              if ( (CurrentThread & 0x42) != 0 )
                v15 |= 0x42uLL;
            }
          }
        }
      }
      if ( !v15 )
        break;
      if ( (v15 & 1) == 0 && v11 != 2 )
        LOBYTE(CurrentThread) = MiMakeSystemAddressValid((__int64)(v13 << 25) >> 16, 0LL, 0, a3, 1);
      ++v11;
      ++v12;
      if ( v11 >= 3 )
        goto LABEL_22;
    }
    LOBYTE(CurrentThread) = 1 << (2 - v11);
    *v4 = CurrentThread;
LABEL_22:
    ++v4;
    a1 = a2;
    --v7;
  }
  while ( v7 );
  return CurrentThread;
}
