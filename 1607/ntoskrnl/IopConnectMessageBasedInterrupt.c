/*
 * XREFs of IopConnectMessageBasedInterrupt @ 0x140539D14
 * Callers:
 *     IoConnectInterruptEx @ 0x140539A98 (IoConnectInterruptEx.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IoDisconnectInterrupt @ 0x140532A34 (IoDisconnectInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x14053A04C (IopGetInterruptConnectionData.c)
 *     IopConnectInterrupt @ 0x14053A12C (IopConnectInterrupt.c)
 */

__int64 __fastcall IopConnectMessageBasedInterrupt(
        int a1,
        struct _DEVICE_OBJECT *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned __int8 a7)
{
  unsigned int v7; // ebx
  int v11; // r14d
  unsigned int *v12; // rsi
  unsigned __int8 v13; // r13
  _DWORD *DeviceNode; // rcx
  int InterruptConnectionData; // edi
  unsigned int v16; // r8d
  __int64 v17; // rcx
  unsigned int *PoolWithTag; // rax
  __int64 v19; // rax
  _QWORD *v20; // r14
  char v21; // al
  __int64 v22; // r15
  char v24; // [rsp+50h] [rbp-B0h]
  int P; // [rsp+58h] [rbp-A8h]
  int v26; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v28; // [rsp+70h] [rbp-90h]
  _QWORD v29[12]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v30[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v31; // [rsp+F0h] [rbp-10h]
  int v32; // [rsp+100h] [rbp+0h]
  __int128 v33; // [rsp+108h] [rbp+8h]

  v7 = 0;
  v28 = a3;
  *a3 = 0LL;
  v26 = a4;
  v24 = 0;
  v11 = 0;
  v12 = 0LL;
  v13 = 0;
  memset(v29, 0, sizeof(v29));
  if ( a2 && (DeviceNode = a2->DeviceObjectExtension->DeviceNode) != 0LL && (DeviceNode[99] & 0x20000) == 0 && a4 )
  {
    InterruptConnectionData = IopGetInterruptConnectionData(a2);
    if ( InterruptConnectionData >= 0 )
    {
      v16 = 0;
      if ( !MEMORY[0] )
        goto LABEL_32;
      v17 = 8LL;
      do
      {
        if ( (unsigned int)(*(_DWORD *)v17 - 1) <= 2 )
        {
          ++v11;
          if ( a1 == 5 )
          {
            v24 = 1;
          }
          else if ( a1 == 3 )
          {
            if ( a7 )
            {
              if ( a7 < *(_BYTE *)(v17 + 8) )
                goto LABEL_32;
              v13 = a7;
            }
            else if ( a6 )
            {
              if ( *(_BYTE *)(v17 + 8) > v13 )
                v13 = *(_BYTE *)(v17 + 8);
            }
            else
            {
              v13 = 0;
            }
          }
        }
        ++v16;
        v17 += 88LL;
      }
      while ( v16 < MEMORY[0] );
      if ( v11 )
      {
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(48 * v11 + 8), 0x6E696F49u);
        v12 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, (unsigned int)(48 * v11 + 8));
          v19 = 0LL;
          *(_BYTE *)v12 = v13;
          for ( P = 0; (unsigned int)v19 < MEMORY[0]; P = v19 )
          {
            v20 = (_QWORD *)(88 * v19 + 8);
            if ( (unsigned int)(*(_DWORD *)(88 * v19 + 8) - 1) <= 2 )
            {
              if ( v24 )
              {
                v21 = 0;
              }
              else if ( v13 )
              {
                v21 = v13;
              }
              else
              {
                v21 = *(_BYTE *)(88 * v19 + 0x10);
              }
              LODWORD(v29[0]) = 1;
              *(_OWORD *)&v29[1] = *(_OWORD *)v20;
              *(_OWORD *)&v29[3] = *((_OWORD *)v20 + 1);
              *(_OWORD *)&v29[5] = *((_OWORD *)v20 + 2);
              *(_OWORD *)&v29[7] = *((_OWORD *)v20 + 3);
              *(_OWORD *)&v29[9] = *((_OWORD *)v20 + 4);
              v29[11] = v20[10];
              InterruptConnectionData = IopConnectInterrupt((unsigned int)&v27, 0, v26, a5, v12[1], a6, v21, 1);
              if ( InterruptConnectionData < 0 )
                goto LABEL_30;
              v22 = 6LL * v12[1];
              if ( *(_DWORD *)v20 == 3 )
              {
                v30[0] = 0;
                v31 = *(_OWORD *)(v20 + 3);
                v30[2] = *((_DWORD *)v20 + 1);
                v33 = *(_OWORD *)(v20 + 5);
                v32 = *((_DWORD *)v20 + 18);
                InterruptConnectionData = HalGetMessageRoutingInfo(v30, v29);
                if ( InterruptConnectionData < 0 )
                  goto LABEL_30;
                v20 = &v29[1];
              }
              *(_QWORD *)&v12[2 * v22 + 2] = v20[9];
              v12[2 * v22 + 8] = *((_DWORD *)v20 + 20);
              *(_QWORD *)&v12[2 * v22 + 4] = v20[3];
              *(_QWORD *)&v12[2 * v22 + 6] = v27 + 112;
              v12[2 * v22 + 9] = *((_DWORD *)v20 + 1);
              LOBYTE(v12[2 * v22 + 10]) = *((_BYTE *)v20 + 8);
              v12[2 * v22 + 11] = *((_DWORD *)v20 + 4);
              v12[2 * v22 + 12] = *((_DWORD *)v20 + 3);
              ++v12[1];
            }
            v19 = (unsigned int)(P + 1);
          }
          InterruptConnectionData = 0;
          *v28 = v12;
        }
        else
        {
          InterruptConnectionData = -1073741670;
        }
      }
      else
      {
LABEL_32:
        InterruptConnectionData = -1073741811;
      }
    }
LABEL_30:
    if ( InterruptConnectionData < 0 && v12 )
    {
      if ( v12[1] )
      {
        do
          IoDisconnectInterrupt(*(PKINTERRUPT *)&v12[12 * v7++ + 6]);
        while ( v7 < v12[1] );
      }
      ExFreePoolWithTag(v12, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)InterruptConnectionData;
}
