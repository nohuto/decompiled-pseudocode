/*
 * XREFs of IopConnectMessageBasedInterrupt @ 0x140503004
 * Callers:
 *     IoConnectInterruptEx @ 0x140502D88 (IoConnectInterruptEx.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IoDisconnectInterrupt @ 0x1404F405C (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x140503334 (IopConnectInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x14050392C (IopGetInterruptConnectionData.c)
 */

__int64 __fastcall IopConnectMessageBasedInterrupt(
        PDEVICE_OBJECT Pdo,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6)
{
  unsigned int v6; // ebx
  int v9; // r14d
  unsigned int *v10; // rsi
  unsigned __int8 v11; // r13
  _DWORD *DeviceNode; // rcx
  int InterruptConnectionData; // edi
  unsigned int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // r15
  unsigned int *PoolWithTag; // rax
  __int64 v18; // rax
  _QWORD *v19; // r14
  char v20; // al
  __int64 v21; // r15
  int P; // [rsp+50h] [rbp-B0h]
  __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v25; // [rsp+60h] [rbp-A0h]
  __int64 v26; // [rsp+68h] [rbp-98h]
  __int64 v27; // [rsp+70h] [rbp-90h]
  _QWORD v28[12]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v29[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v30; // [rsp+F0h] [rbp-10h]
  int v31; // [rsp+100h] [rbp+0h]
  __int128 v32; // [rsp+108h] [rbp+8h]

  v6 = 0;
  v26 = a3;
  v25 = a2;
  *a2 = 0LL;
  v27 = a4;
  v9 = 0;
  v10 = 0LL;
  v11 = 0;
  memset(v28, 0, sizeof(v28));
  if ( !Pdo || (DeviceNode = Pdo->DeviceObjectExtension->DeviceNode) == 0LL || (DeviceNode[99] & 0x20000) != 0 || !a3 )
    return (unsigned int)-1073741811;
  InterruptConnectionData = IopGetInterruptConnectionData(Pdo);
  if ( InterruptConnectionData < 0 )
    goto LABEL_26;
  v14 = 0;
  if ( !MEMORY[0] )
  {
LABEL_33:
    InterruptConnectionData = -1073741811;
    goto LABEL_26;
  }
  v15 = 8LL;
  do
  {
    if ( (unsigned int)(*(_DWORD *)v15 - 1) > 2 )
      goto LABEL_30;
    ++v9;
    if ( a6 )
    {
      if ( a6 < *(_BYTE *)(v15 + 8) )
        goto LABEL_33;
      v11 = a6;
LABEL_30:
      v16 = a5;
      goto LABEL_12;
    }
    v16 = a5;
    if ( a5 )
    {
      if ( *(_BYTE *)(v15 + 8) > v11 )
        v11 = *(_BYTE *)(v15 + 8);
    }
    else
    {
      v11 = 0;
    }
LABEL_12:
    ++v14;
    v15 += 88LL;
  }
  while ( v14 < MEMORY[0] );
  if ( !v9 )
    goto LABEL_33;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(48 * v9 + 8), 0x6E696F49u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)(48 * v9 + 8));
    v18 = 0LL;
    *(_BYTE *)v10 = v11;
    for ( P = 0; (unsigned int)v18 < MEMORY[0]; P = v18 )
    {
      v19 = (_QWORD *)(88 * v18 + 8);
      if ( (unsigned int)(*(_DWORD *)(88 * v18 + 8) - 1) <= 2 )
      {
        v20 = v11;
        if ( !v11 )
          v20 = *((_BYTE *)v19 + 8);
        LODWORD(v28[0]) = 1;
        *(_OWORD *)&v28[1] = *(_OWORD *)v19;
        *(_OWORD *)&v28[3] = *((_OWORD *)v19 + 1);
        *(_OWORD *)&v28[5] = *((_OWORD *)v19 + 2);
        *(_OWORD *)&v28[7] = *((_OWORD *)v19 + 3);
        *(_OWORD *)&v28[9] = *((_OWORD *)v19 + 4);
        v28[11] = v19[10];
        InterruptConnectionData = IopConnectInterrupt((unsigned int)&v24, 0, v26, v27, v10[1], v16, v20, 1);
        if ( InterruptConnectionData < 0 )
          goto LABEL_26;
        v21 = 6LL * v10[1];
        if ( *(_DWORD *)v19 == 3 )
        {
          v29[0] = 0;
          v30 = *(_OWORD *)(v19 + 3);
          v29[2] = *((_DWORD *)v19 + 1);
          v32 = *(_OWORD *)(v19 + 5);
          v31 = *((_DWORD *)v19 + 18);
          InterruptConnectionData = HalGetMessageRoutingInfo(v29, v28);
          if ( InterruptConnectionData < 0 )
            goto LABEL_26;
          v19 = &v28[1];
        }
        *(_QWORD *)&v10[2 * v21 + 2] = v19[9];
        v10[2 * v21 + 8] = *((_DWORD *)v19 + 20);
        *(_QWORD *)&v10[2 * v21 + 4] = v19[3];
        *(_QWORD *)&v10[2 * v21 + 6] = v24 + 112;
        v10[2 * v21 + 9] = *((_DWORD *)v19 + 1);
        LOBYTE(v10[2 * v21 + 10]) = *((_BYTE *)v19 + 8);
        v10[2 * v21 + 11] = *((_DWORD *)v19 + 4);
        v10[2 * v21 + 12] = *((_DWORD *)v19 + 3);
        ++v10[1];
      }
      v16 = a5;
      v18 = (unsigned int)(P + 1);
    }
    InterruptConnectionData = 0;
    *v25 = v10;
  }
  else
  {
    InterruptConnectionData = -1073741670;
  }
LABEL_26:
  if ( InterruptConnectionData < 0 && v10 )
  {
    if ( v10[1] )
    {
      do
        IoDisconnectInterrupt(*(PKINTERRUPT *)&v10[12 * v6++ + 6]);
      while ( v6 < v10[1] );
    }
    ExFreePoolWithTag(v10, 0);
  }
  return (unsigned int)InterruptConnectionData;
}
