/*
 * XREFs of ndisCheckIfTypeMismatch @ 0x1C0021F14
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisIfDetachMiniportBlock @ 0x1C000EC88 (ndisIfDetachMiniportBlock.c)
 *     ndisIfFindInterfaceByNetLuid @ 0x1C001ACC0 (ndisIfFindInterfaceByNetLuid.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C001ACF0 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisIfCreatePersistedInterface @ 0x1C0020620 (ndisIfCreatePersistedInterface.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     ndisIfDeletePersistedInterface @ 0x1C003E528 (ndisIfDeletePersistedInterface.c)
 *     NdisCloseConfiguration @ 0x1C00A9050 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00A9EE0 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00AA1F0 (NdisOpenConfigurationEx.c)
 *     NdisIfAllocateNetLuidIndex @ 0x1C00B3900 (NdisIfAllocateNetLuidIndex.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C00C63F0 (NdisIfFreeNetLuidIndex.c)
 *     NdisWriteConfiguration @ 0x1C00CDA60 (NdisWriteConfiguration.c)
 */

__int64 __fastcall ndisCheckIfTypeMismatch(__int64 a1, __int64 a2)
{
  unsigned int PersistedInterface; // edi
  NET_IFTYPE Length; // r15
  __int64 v7; // rdi
  UINT32 IntegerData; // r12d
  unsigned __int16 v9; // bx
  unsigned __int16 v10; // ax
  __int128 v11; // xmm0
  int v12; // eax
  NET_IFTYPE v13; // cx
  unsigned int v14; // ebx
  _LIST_ENTRY *v15; // rbx
  _LIST_ENTRY *InterfaceByNetLuid; // rax
  KIRQL v17; // r8
  int v18; // ecx
  __int64 v19; // rbx
  int Status; // [rsp+30h] [rbp-D0h] BYREF
  PVOID ConfigurationHandle; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int pNetLuidIndex; // [rsp+40h] [rbp-C0h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+48h] [rbp-B8h] BYREF
  UINT32 v24; // [rsp+50h] [rbp-B0h] BYREF
  NET_IFTYPE v25; // [rsp+54h] [rbp-ACh]
  UNICODE_STRING v26; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING Keyword; // [rsp+68h] [rbp-98h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+78h] [rbp-88h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER v29; // [rsp+90h] [rbp-70h] BYREF
  union _NET_LUID_LH v30[146]; // [rsp+B0h] [rbp-50h] BYREF

  ConfigObject.NdisHandle = (void *)a1;
  Keyword.Buffer = L"*IfType";
  *(_DWORD *)&Keyword.Length = 1048590;
  v26.Buffer = L"NetLuidIndex";
  *(_DWORD *)&v26.Length = 1703960;
  ConfigurationHandle = 0LL;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.Flags = 0;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  PersistedInterface = Status;
  if ( !Status )
  {
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &Keyword, NdisParameterInteger);
    PersistedInterface = Status;
    if ( !Status )
    {
      Length = ParameterValue->ParameterData.StringData.Length;
      if ( Length != *(_WORD *)(a2 + 180) )
      {
        if ( *(_BYTE *)(a1 + 32) < 6u )
        {
          NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v26, NdisParameterInteger);
          PersistedInterface = Status;
          if ( !Status )
          {
            v7 = *(_QWORD *)(a1 + 4096);
            IntegerData = ParameterValue->ParameterData.IntegerData;
            ndisIfDetachMiniportBlock(a1);
            memset(v30, 0, sizeof(v30));
            LODWORD(v30[1].Value) = 75760046;
            v9 = 512;
            *((_DWORD *)&v30[136].Info + 1) = 2 * (*(_BYTE *)(v7 + 1336) & 1);
            v10 = *(_WORD *)(v7 + 596);
            if ( v10 <= 0x200u )
            {
              *((_WORD *)&v30[1].Info + 2) = *(_WORD *)(v7 + 596);
            }
            else
            {
              v10 = 512;
              *((_WORD *)&v30[1].Info + 2) = 512;
            }
            memmove((char *)&v30[1].Info + 6, (const void *)(v7 + 598), v10);
            if ( *(_WORD *)(v7 + 8) <= 0x200u )
            {
              v9 = *(_WORD *)(v7 + 8);
              LOWORD(v30[66].Value) = v9;
            }
            else
            {
              LOWORD(v30[66].Value) = 512;
            }
            memmove((char *)&v30[66].Info + 2, (const void *)(v7 + 10), v9);
            *((_WORD *)&v30[130].Info + 2) = *(_WORD *)(a2 + 180);
            v11 = *(_OWORD *)(v7 + 540);
            *((_DWORD *)&v30[135].Info + 1) = *(_DWORD *)(a2 + 8);
            v12 = *(_DWORD *)(a2 + 12);
            *(_OWORD *)&v30[131].Value = v11;
            LODWORD(v30[136].Value) = v12;
            v25 = Length;
            v24 = IntegerData;
            PersistedInterface = ndisIfDeletePersistedInterface(&v24);
            if ( !PersistedInterface )
            {
              PersistedInterface = NdisIfFreeNetLuidIndex(Length, IntegerData);
              if ( !PersistedInterface )
              {
                v13 = *(_WORD *)(a2 + 180);
                pNetLuidIndex = 0;
                Status = NdisIfAllocateNetLuidIndex(v13, &pNetLuidIndex);
                PersistedInterface = Status;
                if ( !Status )
                {
                  v14 = pNetLuidIndex;
                  v29.ParameterData.IntegerData = pNetLuidIndex;
                  v29.ParameterType = NdisParameterInteger;
                  NdisWriteConfiguration(&Status, ConfigurationHandle, &v26, &v29);
                  PersistedInterface = Status;
                  if ( Status >= 0 )
                  {
                    v29.ParameterData.IntegerData = *(unsigned __int16 *)(a2 + 180);
                    v29.ParameterType = NdisParameterInteger;
                    NdisWriteConfiguration(&Status, ConfigurationHandle, &Keyword, &v29);
                    PersistedInterface = Status;
                    if ( Status >= 0 )
                    {
                      v15 = (_LIST_ENTRY *)((((unsigned __int64)*(unsigned __int16 *)(a2 + 180) << 24) | v14 & 0xFFFFFF) << 24);
                      v30[0].Value = (ULONG64)v15;
                      PersistedInterface = ndisIfCreatePersistedInterface(v30, NdisIfBlockSourcePersistedNsi);
                      if ( !PersistedInterface )
                      {
                        KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
                        InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(v15);
                        v18 = 0;
                        if ( !InterfaceByNetLuid )
                          v18 = -1073741823;
                        v19 = (__int64)InterfaceByNetLuid;
                        PersistedInterface = v18;
                        KeReleaseSpinLock(&ndisIfListLock, v17);
                        if ( !PersistedInterface )
                          PersistedInterface = ndisIfUpdateInterfaceOnAddDevice(v19, a1);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          PersistedInterface = -1073741823;
        }
      }
    }
  }
  if ( ConfigurationHandle )
    NdisCloseConfiguration(ConfigurationHandle);
  return PersistedInterface;
}
