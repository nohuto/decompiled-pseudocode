/*
 * XREFs of ACPIMatchKernelPorts @ 0x1C0023A2C
 * Callers:
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000A660 (ACPIBuildProcessDevicePhaseCrs.c)
 * Callees:
 *     <none>
 */

char __fastcall ACPIMatchKernelPorts(volatile signed __int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  void *QuadPart; // rsi
  char v6; // di
  void *v7; // r14
  void *v8; // r12
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int16 v12; // bp
  PHYSICAL_ADDRESS v13; // rax
  PHYSICAL_ADDRESS v14; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  int v17; // [rsp+30h] [rbp-58h] BYREF
  char v18; // [rsp+38h] [rbp-50h]
  void *v19; // [rsp+40h] [rbp-48h]
  unsigned int v20; // [rsp+98h] [rbp+10h]
  __int64 v21; // [rsp+A0h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a2 + 32);
  v20 = 0;
  QuadPart = 0LL;
  v6 = *(_BYTE *)v2;
  v21 = 32LL;
  v7 = 0LL;
  v8 = 0LL;
  LODWORD(v9) = HeadlessDispatch(16LL, 0LL, 0LL, &v17, &v21);
  if ( (v9 & 0x80000000) == 0LL && v17 == 1 && v18 )
    v7 = v19;
  v10 = KdComPortInUse;
  v11 = KdHvComPortInUse;
  if ( KdComPortInUse || KdHvComPortInUse || v7 )
  {
    if ( KdComPortInUse )
      QuadPart = (void *)KdComPortInUse;
    if ( KdHvComPortInUse )
      v8 = (void *)KdHvComPortInUse;
    if ( *(_DWORD *)(a2 + 24) )
    {
      do
      {
        if ( v6 < 0 )
        {
          v12 = *(_WORD *)(v2 + 1) + 3;
        }
        else
        {
          LOBYTE(v9) = v6 & 7;
          v12 = (v6 & 7) + 1;
          v6 &= 0x78u;
        }
        switch ( v6 )
        {
          case 'x':
            return v9;
          case '@':
            v9 = *(unsigned __int16 *)(v2 + 2);
            break;
          case 'H':
            v9 = *(_WORD *)(v2 + 1) & 0x3FF;
            break;
          default:
            switch ( (unsigned __int8)v6 )
            {
              case 0x87u:
                if ( *(_BYTE *)(v2 + 3) )
                {
                  if ( *(_BYTE *)(v2 + 3) != 1 )
                    goto LABEL_50;
                }
                else if ( QuadPart )
                {
                  PhysicalAddress = MmGetPhysicalAddress(QuadPart);
                  v10 = KdComPortInUse;
                  QuadPart = (void *)PhysicalAddress.QuadPart;
                  v11 = KdHvComPortInUse;
                }
                v9 = (unsigned int)(*(_DWORD *)(v2 + 10) + *(_DWORD *)(v2 + 18));
                break;
              case 0x88u:
                if ( *(_BYTE *)(v2 + 3) )
                {
                  if ( *(_BYTE *)(v2 + 3) != 1 )
                    goto LABEL_50;
                }
                else if ( QuadPart )
                {
                  v14 = MmGetPhysicalAddress(QuadPart);
                  v10 = KdComPortInUse;
                  QuadPart = (void *)v14.QuadPart;
                  v11 = KdHvComPortInUse;
                }
                v9 = *(unsigned __int16 *)(v2 + 12) + *(unsigned __int16 *)(v2 + 8);
                break;
              case 0x8Au:
                if ( *(_BYTE *)(v2 + 3) )
                {
                  if ( *(_BYTE *)(v2 + 3) != 1 )
                    goto LABEL_50;
                }
                else if ( QuadPart )
                {
                  v13 = MmGetPhysicalAddress(QuadPart);
                  v10 = KdComPortInUse;
                  QuadPart = (void *)v13.QuadPart;
                  v11 = KdHvComPortInUse;
                }
                v9 = *(_QWORD *)(v2 + 14) + *(_QWORD *)(v2 + 30);
                break;
              default:
                goto LABEL_50;
            }
            break;
        }
        if ( v10 && (void *)v9 == QuadPart || v11 && (void *)v9 == v8 || v7 && (void *)v9 == v7 )
        {
          _InterlockedOr64(a1, 0x680003uLL);
          return v9;
        }
LABEL_50:
        LOBYTE(v9) = v12;
        v2 += v12;
        v20 += v12;
        v6 = *(_BYTE *)v2;
      }
      while ( v20 < *(_DWORD *)(a2 + 24) );
    }
  }
  return v9;
}
