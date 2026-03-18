/*
 * XREFs of ACPIMatchKernelPorts @ 0x1C002AA98
 * Callers:
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000E600 (ACPIBuildProcessDevicePhaseCrs.c)
 * Callees:
 *     WPP_RECORDER_SF_qqss @ 0x1C00107C8 (WPP_RECORDER_SF_qqss.c)
 */

char __fastcall ACPIMatchKernelPorts(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  char v3; // bl
  char v6; // r14
  void *v7; // r12
  void *QuadPart; // rbp
  void *v9; // r13
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned __int16 v13; // r15
  PHYSICAL_ADDRESS v14; // rax
  unsigned __int64 v15; // rax
  PHYSICAL_ADDRESS v16; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  const char *v18; // rcx
  const char *v19; // r8
  __int64 v20; // r9
  unsigned __int16 v21; // r9
  __int64 v22; // r9
  int v24; // [rsp+50h] [rbp-58h] BYREF
  char v25; // [rsp+58h] [rbp-50h]
  void *v26; // [rsp+60h] [rbp-48h]
  unsigned int v28; // [rsp+C0h] [rbp+18h]
  __int64 v29; // [rsp+C8h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a2 + 32);
  v3 = 0;
  v28 = 0;
  v6 = *(_BYTE *)v2;
  v29 = 32LL;
  v7 = 0LL;
  QuadPart = 0LL;
  v9 = 0LL;
  v10 = HeadlessDispatch(16LL, 0LL, 0LL, &v24, &v29);
  if ( v10 >= 0 && v24 == 1 && v25 )
    v7 = v26;
  v11 = KdComPortInUse;
  v12 = KdHvComPortInUse;
  if ( KdComPortInUse || KdHvComPortInUse || v7 )
  {
    if ( KdComPortInUse )
      QuadPart = (void *)KdComPortInUse;
    if ( KdHvComPortInUse )
      v9 = (void *)KdHvComPortInUse;
    if ( *(_DWORD *)(a2 + 24) )
    {
      do
      {
        if ( v6 < 0 )
        {
          v13 = *(_WORD *)(v2 + 1) + 3;
        }
        else
        {
          LOBYTE(v10) = v6 & 7;
          v13 = (v6 & 7) + 1;
          v6 &= 0x78u;
        }
        switch ( v6 )
        {
          case 'x':
            return v10;
          case '@':
            v15 = *(unsigned __int16 *)(v2 + 2);
            break;
          case 'H':
            v15 = *(_WORD *)(v2 + 1) & 0x3FF;
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
                  v11 = KdComPortInUse;
                  QuadPart = (void *)PhysicalAddress.QuadPart;
                  v12 = KdHvComPortInUse;
                }
                v15 = (unsigned int)(*(_DWORD *)(v2 + 10) + *(_DWORD *)(v2 + 18));
                break;
              case 0x88u:
                if ( *(_BYTE *)(v2 + 3) )
                {
                  if ( *(_BYTE *)(v2 + 3) != 1 )
                    goto LABEL_50;
                }
                else if ( QuadPart )
                {
                  v16 = MmGetPhysicalAddress(QuadPart);
                  v11 = KdComPortInUse;
                  QuadPart = (void *)v16.QuadPart;
                  v12 = KdHvComPortInUse;
                }
                v15 = *(unsigned __int16 *)(v2 + 12) + *(unsigned __int16 *)(v2 + 8);
                break;
              case 0x8Au:
                if ( *(_BYTE *)(v2 + 3) )
                {
                  if ( *(_BYTE *)(v2 + 3) != 1 )
                    goto LABEL_50;
                }
                else if ( QuadPart )
                {
                  v14 = MmGetPhysicalAddress(QuadPart);
                  v11 = KdComPortInUse;
                  QuadPart = (void *)v14.QuadPart;
                  v12 = KdHvComPortInUse;
                }
                v15 = *(_QWORD *)(v2 + 14) + *(_QWORD *)(v2 + 30);
                break;
              default:
                goto LABEL_50;
            }
            break;
        }
        if ( v11 && (void *)v15 == QuadPart || v12 && (void *)v15 == v9 || v7 && (void *)v15 == v7 )
        {
          _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x680003uLL);
          if ( KdComPortInUse && (void *)v15 == QuadPart || KdHvComPortInUse && (void *)v15 == v9 )
          {
            v18 = (const char *)qword_1C002C340;
            v19 = (const char *)qword_1C002C340;
            if ( a1 )
            {
              v20 = *(_QWORD *)(a1 + 8);
              v3 = a1;
              if ( (v20 & 0x200000000000LL) != 0 )
              {
                v18 = *(const char **)(a1 + 560);
                if ( (v20 & 0x400000000000LL) != 0 )
                  v19 = *(const char **)(a1 + 568);
              }
            }
            v21 = 13;
          }
          else
          {
            v18 = (const char *)qword_1C002C340;
            v19 = (const char *)qword_1C002C340;
            if ( a1 )
            {
              v22 = *(_QWORD *)(a1 + 8);
              v3 = a1;
              if ( (v22 & 0x200000000000LL) != 0 )
              {
                v18 = *(const char **)(a1 + 560);
                if ( (v22 & 0x400000000000LL) != 0 )
                  v19 = *(const char **)(a1 + 568);
              }
            }
            v21 = 14;
          }
          LOBYTE(v10) = WPP_RECORDER_SF_qqss(
                          (__int64)WPP_GLOBAL_Control->DeviceExtension,
                          4u,
                          6u,
                          v21,
                          (__int64)&WPP_e479c42625e5324ff0b798dec9fc716d_Traceguids,
                          v15,
                          v3,
                          v18,
                          v19);
          return v10;
        }
LABEL_50:
        v2 += v13;
        v28 += v13;
        LOBYTE(v10) = a2;
        v6 = *(_BYTE *)v2;
      }
      while ( v28 < *(_DWORD *)(a2 + 24) );
    }
  }
  return v10;
}
