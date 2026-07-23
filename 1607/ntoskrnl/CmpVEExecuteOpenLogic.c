/*
 * XREFs of CmpVEExecuteOpenLogic @ 0x14043F180
 * Callers:
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x14002CF68 (HvpGetCellContextReinitialize.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpUnblockHiveWrites @ 0x1403E13D8 (CmpUnblockHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x1403E141C (CmpBlockHiveWrites.c)
 *     CmpIsKeyDeleted @ 0x140403EF0 (CmpIsKeyDeleted.c)
 *     CmpIsSystemEntity @ 0x14040E004 (CmpIsSystemEntity.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 *     CmVirtualKCBToRealPath @ 0x140600410 (CmVirtualKCBToRealPath.c)
 *     CmpFindPathByNameEx @ 0x1406010C8 (CmpFindPathByNameEx.c)
 *     CmpUpgradeKcbLockToExclusive @ 0x140603F38 (CmpUpgradeKcbLockToExclusive.c)
 */

__int64 __fastcall CmpVEExecuteOpenLogic(__int64 a1, _DWORD *a2, char a3, __int64 a4)
{
  int v8; // ebx
  char PathByName; // bl
  void *v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rbx
  _BYTE v14[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v16[8]; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v17[8]; // [rsp+48h] [rbp-30h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-28h] BYREF

  v15 = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
  HvpGetCellContextReinitialize((__int64)v16);
  if ( CmpVEEnabled )
  {
    if ( *(_WORD *)(a1 + 58) )
    {
      v8 = -1073741199;
    }
    else if ( (*(_WORD *)(a1 + 178) & 0x200) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 4) & 0x7FE00000u) > 0xA00000 )
      {
        if ( CmpIsSystemEntity(a2 + 4) )
        {
          v8 = -1073741199;
        }
        else if ( CmpVEEnabled && (*(_WORD *)(a1 + 178) & 0x100) != 0 )
        {
          v8 = -1073741199;
        }
        else
        {
          v8 = CmVirtualKCBToRealPath(a1, P);
          if ( v8 >= 0 )
          {
            v8 = CmpBlockHiveWrites(0LL, 16, &v15);
            if ( v8 < 0 )
            {
              if ( v15 )
                CmpUnblockHiveWrites(0LL, 16, v15);
            }
            else
            {
              PathByName = CmpFindPathByNameEx(0, (unsigned int)P, 0, 16, (__int64)v14, (__int64)v17);
              CmpUnblockHiveWrites(0LL, 16, v15);
              if ( PathByName )
              {
                v11 = *(void **)(a4 + 8);
                if ( v11 )
                  ExFreePoolWithTag(v11, 0);
                *(_OWORD *)a4 = *(_OWORD *)P;
                RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
                *a2 |= 8u;
                v8 = 260;
              }
              else if ( a3 || (CmpUpgradeKcbLockToExclusive(a1), !(unsigned __int8)CmpIsKeyDeleted(a1, 0LL)) )
              {
                ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a1 + 24) + 2848LL), 1u);
                v12 = *(_QWORD *)(a1 + 24);
                v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(v12 + 8))(
                        v12,
                        *(unsigned int *)(a1 + 32),
                        v16);
                if ( v13 )
                {
                  if ( (unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(a1 + 24), *(unsigned int *)(a1 + 32)) )
                  {
                    *(_WORD *)(v13 + 2) |= 0x100u;
                    v8 = 260;
                    *(_WORD *)(a1 + 178) |= 0x100u;
                    *a2 |= 8u;
                  }
                  else
                  {
                    v8 = -1073741443;
                  }
                  (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), v16);
                }
                else
                {
                  v8 = -1073741670;
                }
                if ( v12 )
                  ExReleaseResourceLite(*(PERESOURCE *)(v12 + 2848));
              }
              else
              {
                v8 = -1073741772;
              }
            }
          }
        }
      }
      else
      {
        v8 = -1073741199;
      }
    }
    else
    {
      v8 = -1073741199;
    }
  }
  else
  {
    v8 = -1073741199;
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  return (unsigned int)v8;
}
