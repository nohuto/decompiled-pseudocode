/*
 * XREFs of ?GetInfo@GestureSession@@UEAAJW4GestureDataType@@PEAUGestureData@@@Z @ 0x180036A80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GestureSession::GetInfo(__int64 a1, int a2)
{
  __int64 v3; // rax
  int v5; // edi
  _DWORD *v6; // rsi
  int v7; // ebx

  if ( a2 > 7 )
  {
    if ( a2 == 8 )
    {
LABEL_19:
      v3 = 32LL;
LABEL_20:
      v6 = (_DWORD *)(v3 + a1);
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v3 + a1) + 40LL))(v3 + a1);
      if ( v5 >= 0 )
      {
        v7 = ~v6[2];
        *(_DWORD *)(a1 + 16) &= (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6) | v7;
      }
      return (unsigned int)v5;
    }
    if ( a2 <= 12 )
    {
      v3 = 480LL;
      goto LABEL_20;
    }
    if ( a2 == 13 )
    {
      v3 = 704LL;
      goto LABEL_20;
    }
    if ( a2 == 14 )
    {
      v3 = 768LL;
      goto LABEL_20;
    }
  }
  else
  {
    if ( a2 == 7 )
    {
      v3 = 248LL;
      goto LABEL_20;
    }
    if ( !a2 )
      return 1LL;
    if ( a2 > 0 )
    {
      if ( a2 > 4 )
      {
        if ( a2 == 5 )
          v3 = 168LL;
        else
          v3 = 416LL;
        goto LABEL_20;
      }
      goto LABEL_19;
    }
  }
  return (unsigned int)-2147024809;
}
