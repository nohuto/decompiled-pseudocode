/*
 * XREFs of GreDrvConnect @ 0x1C00C0F00
 * Callers:
 *     xxxRemoteConnect @ 0x1C00B1960 (xxxRemoteConnect.c)
 * Callees:
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C0089048 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C00891E0 (--1SEMOBJEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreDrvConnect(_QWORD *a1, HSEMAPHORE a2, __int64 a3, HSEMAPHORE a4)
{
  int v5; // edi
  struct _LDEV *v6; // rbx
  unsigned int (__fastcall *v7)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  unsigned int v9; // [rsp+20h] [rbp-D8h]
  HSEMAPHORE v10; // [rsp+28h] [rbp-D0h]
  unsigned int v11; // [rsp+30h] [rbp-C8h]
  struct _ERESOURCE *v12[12]; // [rsp+90h] [rbp-68h] BYREF

  v5 = 0;
  SEMOBJEX::SEMOBJEX((SEMOBJEX *)v12, a2, a3, a4, v9, v10, v11, ghsemSprite, 5u, ghsemHT, 6u, ghsemDriverMgmt, 0xCu);
  v6 = gpldevDrivers;
  do
  {
    if ( !v6 )
      break;
    if ( *((_QWORD *)v6 + 2) )
    {
      if ( *((_DWORD *)v6 + 6) == 1 )
      {
        v7 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)v6 + 111) + 616LL);
        if ( v7 )
        {
          if ( v7(a1[3], a1[2], a1[1], a1[4]) )
          {
            *((_DWORD *)v6 + 224) = 1;
          }
          else
          {
            *((_DWORD *)v6 + 224) = 4;
            v5 = -2143354875;
          }
        }
      }
    }
    v6 = *(struct _LDEV **)v6;
  }
  while ( v5 >= 0 );
  SEMOBJEX::~SEMOBJEX(v12);
  return (unsigned int)v5;
}
