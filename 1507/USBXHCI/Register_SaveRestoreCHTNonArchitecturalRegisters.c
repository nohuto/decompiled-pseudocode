/*
 * XREFs of Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C001E0AC
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C00014E0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0004300 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 */

int __fastcall Register_SaveRestoreCHTNonArchitecturalRegisters(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v5; // rax
  unsigned int v6; // ecx
  signed __int32 *v7; // r10
  unsigned int *v8; // r9
  unsigned int v9; // edx
  unsigned int v10; // edx
  signed __int32 v12[4]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v12[0] = 35076;
  v12[1] = 35348;
  v12[2] = 35620;
  v5 = *(_QWORD *)(v2 + 232);
  if ( (v5 & 0x80000000000000LL) != 0 )
  {
    v6 = 0;
    v7 = v12;
    do
    {
      v8 = (unsigned int *)(*(_QWORD *)(a1 + 24) + (unsigned int)*v7);
      v9 = *v8;
      LODWORD(v5) = *(_DWORD *)(a1 + 116);
      if ( a2 )
      {
        if ( (v9 & 0x2000000) != 0 )
          LODWORD(v5) = v5 | (1 << v6);
        else
          LODWORD(v5) = v5 & ~(1 << v6);
        *(_DWORD *)(a1 + 116) = v5;
      }
      else
      {
        if ( _bittest((const int *)&v5, v6) )
          v10 = v9 | 0x2000000;
        else
          v10 = v9 & 0xFDFFFFFF;
        *v8 = v10;
        _InterlockedOr(v12, 0);
      }
      ++v6;
      ++v7;
    }
    while ( v6 < 3 );
  }
  return v5;
}
