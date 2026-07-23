/*
 * XREFs of KiConnectInterrupt @ 0x14012D61C
 * Callers:
 *     KeConnectInterrupt @ 0x14012D534 (KeConnectInterrupt.c)
 * Callees:
 *     KiReleaseInterruptConnectLock @ 0x14012D81C (KiReleaseInterruptConnectLock.c)
 *     KiAcquireInterruptConnectLock @ 0x14012D82C (KiAcquireInterruptConnectLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KiInsertInterruptObjectOrdered @ 0x1401D8410 (KiInsertInterruptObjectOrdered.c)
 */

__int64 __fastcall KiConnectInterrupt(__int64 a1)
{
  __int64 v1; // rsi
  char v2; // bp
  unsigned __int8 v3; // dl
  char v4; // r14
  __int64 v5; // r9
  unsigned __int8 v7; // al
  __int64 (__fastcall *v8)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16); // rcx
  bool v9; // zf
  __int64 (__fastcall *v10)(); // rcx
  char *v11; // r10
  __int64 (__fastcall *v12)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16); // rax
  __int64 v13; // r11
  __int64 v14; // r10
  _BYTE v16[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 (__fastcall *v17)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16); // [rsp+28h] [rbp-40h]
  _BYTE v18[16]; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(unsigned int *)(a1 + 88);
  v2 = 0;
  v3 = *(_BYTE *)(a1 + 92);
  v4 = 0;
  v5 = *(unsigned int *)(a1 + 96);
  if ( (unsigned int)v1 > 0xFF || v3 > 0xFu || v3 != (unsigned int)v1 >> 4 && v3 )
    return 3221225711LL;
  if ( (unsigned int)v5 >= (unsigned int)KeNumberProcessors_0 )
    return 3221225711LL;
  v7 = *(_BYTE *)(a1 + 93);
  if ( v7 < v3 )
  {
    if ( v7 )
      return 3221225711LL;
  }
  KiAcquireInterruptConnectLock((unsigned int)v5, v16, v18, v5);
  v8 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))&KeGetPcr()->IdtBase[v1];
  v9 = *(_BYTE *)(a1 + 95) == 0;
  LOWORD(v17) = *(_WORD *)v8;
  WORD1(v17) = *((_WORD *)v8 + 3);
  HIDWORD(v17) = *((_DWORD *)v8 + 2);
  if ( v9 )
  {
    v10 = KiIsrThunkShadow;
    if ( !KiKvaShadow )
      v10 = KxUnexpectedInterrupt0;
    v8 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))((char *)v10 + 8 * v1);
    if ( v17 == v8 )
    {
      v11 = (char *)KeGetCurrentPrcb()->InterruptObject[v1];
      if ( !v11 )
      {
        if ( !*(_BYTE *)(a1 + 93) )
        {
          *(_QWORD *)(a1 + 16) = a1 + 8;
          *(_QWORD *)(a1 + 8) = a1 + 8;
          *(_QWORD *)(a1 + 80) = KiChainedDispatch;
        }
        v4 = 1;
        *(_BYTE *)(a1 + 95) = 1;
        goto LABEL_28;
      }
      if ( (unsigned int)v1 >= 0x30 )
      {
        v2 = 1;
        if ( *(_DWORD *)(a1 + 108) == *((_DWORD *)v11 + 27) )
        {
          if ( *(_BYTE *)(a1 + 100) )
          {
            if ( v11[100] )
            {
              v8 = KiInterruptDispatch;
              if ( *(__int64 (__fastcall **)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))(a1 + 80) == KiInterruptDispatch )
              {
                v12 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))*((_QWORD *)v11 + 10);
                if ( v12 == KiInterruptDispatch || v12 == KiChainedDispatch )
                {
                  v4 = 1;
                  *(_BYTE *)(a1 + 95) = 1;
                  if ( *((__int64 (__fastcall **)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))v11
                       + 10) != KiChainedDispatch )
                  {
                    *((_QWORD *)v11 + 2) = v11 + 8;
                    *((_QWORD *)v11 + 1) = v11 + 8;
                    *((_QWORD *)v11 + 10) = KiChainedDispatch;
                  }
                  KiInsertInterruptObjectOrdered(v11, a1);
                  if ( !*(_BYTE *)(v14 + 93) )
                  {
                    if ( *(_BYTE *)(a1 + 93) )
                    {
                      *(_QWORD *)(a1 + 80) = v13;
LABEL_28:
                      KeGetCurrentPrcb()->InterruptObject[v1] = (void *)a1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  LOBYTE(v8) = v16[0];
  KiReleaseInterruptConnectLock(v8, v18);
  if ( v4 )
    return v2 != 0 ? 0x127 : 0;
  return 3221225711LL;
}
