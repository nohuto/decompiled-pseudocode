/*
 * XREFs of Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C0023180
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0003E90 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005290 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 */

int __fastcall Register_SaveRestoreCHTNonArchitecturalRegisters(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int128 v5; // xmm0
  __int64 v6; // rax
  unsigned int v7; // ecx
  unsigned int *v8; // r10
  unsigned int *v9; // r9
  unsigned int v10; // edx
  unsigned int v11; // edx
  __int128 v13; // [rsp+0h] [rbp-38h] BYREF
  _DWORD v14[4]; // [rsp+10h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v14[0] = 35076;
  v14[1] = 35348;
  v14[2] = 35620;
  v5 = *(_OWORD *)(v2 + 232);
  v6 = *(_QWORD *)(v2 + 232);
  v13 = v5;
  if ( (v6 & 0x80000000000000LL) != 0 )
  {
    v7 = 0;
    v8 = v14;
    do
    {
      v9 = (unsigned int *)(*(_QWORD *)(a1 + 24) + *v8);
      v10 = *v9;
      LODWORD(v6) = *(_DWORD *)(a1 + 116);
      if ( a2 )
      {
        if ( (v10 & 0x2000000) != 0 )
          LODWORD(v6) = v6 | (1 << v7);
        else
          LODWORD(v6) = v6 & ~(1 << v7);
        *(_DWORD *)(a1 + 116) = v6;
      }
      else
      {
        if ( _bittest((const int *)&v6, v7) )
          v11 = v10 | 0x2000000;
        else
          v11 = v10 & 0xFDFFFFFF;
        *v9 = v11;
        _InterlockedOr((volatile signed __int32 *)&v13, 0);
      }
      ++v7;
      ++v8;
    }
    while ( v7 < 3 );
  }
  return v6;
}
