/*
 * XREFs of KeDisconnectInterrupt @ 0x1401243CC
 * Callers:
 *     KeConnectInterrupt @ 0x14012D534 (KeConnectInterrupt.c)
 *     IoDisconnectInterrupt @ 0x140532A34 (IoDisconnectInterrupt.c)
 * Callees:
 *     KiIntSteerDisable @ 0x1401244B8 (KiIntSteerDisable.c)
 *     KeMaskInterrupt @ 0x140124610 (KeMaskInterrupt.c)
 *     KiDisconnectInterruptCommon @ 0x140124828 (KiDisconnectInterruptCommon.c)
 *     KiIsInterruptTypeSecondary @ 0x14012DE50 (KiIsInterruptTypeSecondary.c)
 *     KiDisconnectSecondaryInterrupt @ 0x1401D5A04 (KiDisconnectSecondaryInterrupt.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeDisconnectInterrupt(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 *v5; // rdi
  unsigned int v6; // esi
  unsigned int v7; // r12d
  __int64 *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rbp
  int v11; // eax
  void *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned int v16; // [rsp+60h] [rbp+8h]
  int v17; // [rsp+68h] [rbp+10h]

  v3 = (unsigned __int8)a2;
  v5 = a1;
  v6 = 0;
  KeMaskInterrupt(a1, a2, a3, 0LL);
  LOBYTE(v17) = KiIsInterruptTypeSecondary(a3);
  v16 = v3;
  v7 = v3;
  KiIntSteerDisable(v5, v3);
  if ( (_BYTE)v3 )
  {
    v8 = v5;
    v9 = (unsigned __int8)v3;
    do
    {
      v10 = *v8;
      if ( (_BYTE)v17 )
        v11 = KiDisconnectSecondaryInterrupt(*v8, a3);
      else
        v11 = KiDisconnectInterruptCommon(0LL, *v8, a3);
      _InterlockedOr((volatile signed __int32 *)(v10 + 104), v17 | 1);
      if ( v11 < 0 )
      {
        v6 = v11;
      }
      else if ( v11 == 296 )
      {
        v6 = 296;
      }
      ++v8;
      --v9;
    }
    while ( v9 );
    v7 = v16;
  }
  v12 = *(void **)(*v5 + 240);
  if ( v12 )
  {
    if ( v7 )
    {
      v13 = v7;
      do
      {
        v14 = *v5++;
        *(_QWORD *)(v14 + 240) = 0LL;
        --v13;
      }
      while ( v13 );
    }
    ExFreePoolWithTag(v12, 0x5249654Bu);
  }
  return v6;
}
