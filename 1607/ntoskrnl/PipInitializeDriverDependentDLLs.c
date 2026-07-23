/*
 * XREFs of PipInitializeDriverDependentDLLs @ 0x14079ACD0
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x14079A9D8 (PipInitializeCoreDriversAndElam.c)
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     MmCallDllInitialize @ 0x1405447E0 (MmCallDllInitialize.c)
 *     PnpNotifyEarlyLaunchImageLoad @ 0x14079BFE8 (PnpNotifyEarlyLaunchImageLoad.c)
 *     PnpDoPolicyCheck @ 0x14079C03C (PnpDoPolicyCheck.c)
 */

char __fastcall PipInitializeDriverDependentDLLs(int a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  char v4; // r15
  char v5; // r12
  __int64 v6; // rsi
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  int v9; // edx
  bool v10; // zf
  __int64 v11; // rdx
  _QWORD v13[14]; // [rsp+28h] [rbp-39h] BYREF
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh] BYREF
  unsigned int v15; // [rsp+C8h] [rbp+67h] BYREF

  v2 = &retaddr;
  if ( !a1 )
  {
    v4 = 0;
    goto LABEL_5;
  }
  v4 = 1;
  v5 = 0;
  if ( a1 != 1 )
LABEL_5:
    v5 = 1;
  v6 = a2 + 16;
  v7 = *(_QWORD **)(a2 + 16);
  if ( v7 != (_QWORD *)(a2 + 16) )
  {
    while ( 1 )
    {
      v8 = (__int64)v7;
      v7 = (_QWORD *)*v7;
      LODWORD(v2) = *(_DWORD *)(v8 + 104);
      if ( ((unsigned int)v2 & 0x4000000) == 0 )
        goto LABEL_8;
      v9 = *(_DWORD *)(v8 + 228);
      if ( !a1 )
        break;
      if ( a1 == 1 )
      {
        v10 = (v9 & 2) == 0;
        goto LABEL_13;
      }
      if ( a1 == 2 && (v9 & 3) == 0 )
      {
LABEL_17:
        if ( v4 )
        {
          v15 = 0;
          memset(v13, 0, 0x68uLL);
          LODWORD(v13[0]) = 0;
          *(_OWORD *)&v13[1] = *(_OWORD *)(v8 + 72);
          HIDWORD(v13[0]) = *(_DWORD *)(v8 + 224) & 1;
          LODWORD(v13[11]) = *(_DWORD *)(v8 + 208);
          LODWORD(v13[12]) = *(_DWORD *)(v8 + 216);
          v13[9] = *(_QWORD *)(v8 + 192);
          HIDWORD(v13[11]) = *(_DWORD *)(v8 + 212);
          HIDWORD(v13[12]) = *(_DWORD *)(v8 + 220);
          v13[10] = *(_QWORD *)(v8 + 200);
          v13[4] = qword_1407BEE30;
          LODWORD(v13[3]) = 0x20000;
          *(_OWORD *)&v13[7] = *(_OWORD *)(v8 + 176);
          *(_OWORD *)&v13[5] = *(_OWORD *)(v8 + 160);
          PnpNotifyEarlyLaunchImageLoad(v13, &v15);
          LOBYTE(v11) = v5;
          LOBYTE(v2) = PnpDoPolicyCheck(v15, v11);
        }
        else
        {
          LOBYTE(v2) = 1;
        }
        if ( (_BYTE)v2 )
          LOBYTE(v2) = MmCallDllInitialize(v8, v6);
      }
LABEL_8:
      if ( v7 == (_QWORD *)v6 )
        return (char)v2;
    }
    v10 = (v9 & 1) == 0;
LABEL_13:
    if ( !v10 )
      goto LABEL_17;
    goto LABEL_8;
  }
  return (char)v2;
}
