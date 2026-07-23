/*
 * XREFs of IopSetupArbiterAndTranslators @ 0x1405574E8
 * Callers:
 *     IopResourceRequirementsListToReqList @ 0x140556FA0 (IopResourceRequirementsListToReqList.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopFindResourceHandlerInfo @ 0x1405578D0 (IopFindResourceHandlerInfo.c)
 *     IopFindLegacyBusDeviceNode @ 0x14055795C (IopFindLegacyBusDeviceNode.c)
 *     IopCallArbiter @ 0x1405579B4 (IopCallArbiter.c)
 *     IopQueryResourceHandlerInterface @ 0x140557A7C (IopQueryResourceHandlerInterface.c)
 *     IopTranslateAndAdjustReqDesc @ 0x140558158 (IopTranslateAndAdjustReqDesc.c)
 */

__int64 __fastcall IopSetupArbiterAndTranslators(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  char v5; // r12
  char v6; // r13
  char v7; // si
  unsigned int v8; // eax
  char v9; // di
  __int64 LegacyBusDeviceNode; // rbx
  __int64 v11; // r15
  __int64 v12; // rdi
  char v13; // di
  __int64 v14; // rdx
  __int64 v15; // r11
  __int64 result; // rax
  __int16 v17; // di
  int v18; // eax
  __int16 v19; // di
  int v20; // eax
  bool v21; // zf
  char *v22; // rax
  unsigned __int64 v23; // rdx
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  unsigned __int64 *v26; // rcx
  __int64 v27; // rdi
  unsigned __int64 PoolWithTag; // rax
  unsigned __int64 *v29; // rdx
  bool v30; // cf
  __int64 v31; // rdi
  __int64 v32; // [rsp+30h] [rbp-28h] BYREF
  __int64 v33; // [rsp+38h] [rbp-20h] BYREF
  __int64 v34; // [rsp+40h] [rbp-18h]
  char v35; // [rsp+A0h] [rbp+48h]
  char v36; // [rsp+A8h] [rbp+50h]
  __int64 v37; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v38; // [rsp+B8h] [rbp+60h] BYREF

  v4 = *((_QWORD *)a1 + 9);
  v5 = 0;
  v34 = v4;
  v6 = 0;
  v36 = 1;
  v7 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 64LL) + 1LL);
  v8 = a1[20];
  if ( v7 == 7 )
    v7 = 3;
  if ( v8 != 1 || *a1 )
  {
    v9 = 0;
    v35 = 0;
  }
  else
  {
    v9 = 1;
    v35 = 1;
  }
  if ( !v4 || v8 == 1 )
    LegacyBusDeviceNode = IopRootDeviceNode;
  else
    LegacyBusDeviceNode = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
  if ( !LegacyBusDeviceNode )
    return 3221225610LL;
  while ( 1 )
  {
    if ( LegacyBusDeviceNode != IopRootDeviceNode || v6 || v9 )
    {
      if ( v5 )
        goto LABEL_17;
      v11 = *(_QWORD *)(LegacyBusDeviceNode + 32);
      if ( v11 == v4 )
        goto LABEL_17;
      LOBYTE(a3) = v7;
      if ( (unsigned __int8)IopFindResourceHandlerInfo(2LL, LegacyBusDeviceNode, a3, &v38) )
        goto LABEL_13;
      if ( (unsigned __int8)v7 > 0xFu )
        v19 = 0;
      else
        v19 = 1 << v7;
      v20 = IopQueryResourceHandlerInterface(2LL, v11, a3, &v37);
      *(_WORD *)(LegacyBusDeviceNode + 526) |= v19;
      if ( v20 >= 0 )
      {
        v31 = v37;
      }
      else
      {
        *(_WORD *)(LegacyBusDeviceNode + 524) |= v19;
        if ( (unsigned __int8)v7 <= 0xFu )
        {
LABEL_13:
          v12 = v38;
LABEL_14:
          if ( v12 )
          {
            v5 = 1;
            if ( (*(_DWORD *)(*(_QWORD *)(v12 + 24) + 40LL) & 1) != 0 && (int)IopCallArbiter(v12, 7LL) < 0 )
            {
              v5 = 0;
            }
            else
            {
              *((_QWORD *)a1 + 36) = v12;
              *(_WORD *)(v12 + 104) = 0;
            }
          }
LABEL_17:
          v13 = v36;
          if ( !v36 )
          {
LABEL_24:
            LegacyBusDeviceNode = *(_QWORD *)(LegacyBusDeviceNode + 16);
            v9 = v35;
            goto LABEL_25;
          }
          LOBYTE(a3) = v7;
          if ( (unsigned __int8)IopFindResourceHandlerInfo(1LL, LegacyBusDeviceNode, a3, &v32) )
            goto LABEL_19;
          if ( (unsigned __int8)v7 > 0xFu )
            v17 = 0;
          else
            v17 = 1 << v7;
          v18 = IopQueryResourceHandlerInterface(1LL, *(_QWORD *)(LegacyBusDeviceNode + 32), a3, &v37);
          *(_WORD *)(LegacyBusDeviceNode + 522) |= v17;
          if ( v18 >= 0 )
          {
            v27 = v37;
          }
          else
          {
            *(_WORD *)(LegacyBusDeviceNode + 520) |= v17;
            if ( (unsigned __int8)v7 <= 0xFu )
            {
              v13 = v36;
LABEL_19:
              v14 = v32;
LABEL_20:
              if ( v14 )
                v6 = 1;
              if ( !v5 && v14 )
              {
                result = IopTranslateAndAdjustReqDesc(*((_QWORD *)a1 + 4), v14, &v33);
                if ( (int)result < 0 )
                  return result;
                a3 = v33;
                v21 = *(_BYTE *)(*(_QWORD *)(v33 + 64) + 1LL) == 7;
                v7 = *(_BYTE *)(*(_QWORD *)(v33 + 64) + 1LL);
                *(_QWORD *)(v33 + 32) = *((_QWORD *)a1 + 4);
                *((_QWORD *)a1 + 4) = a3;
                if ( v21 )
                  v7 = 3;
                if ( (_DWORD)result == 288 )
                  v13 = 0;
                v36 = v13;
              }
              goto LABEL_24;
            }
            v27 = 0LL;
            v37 = 0LL;
          }
          PoolWithTag = (unsigned __int64)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x20207050u);
          if ( !PoolWithTag )
            return 3221225626LL;
          *(_BYTE *)(PoolWithTag + 16) = v7;
          *(_QWORD *)(PoolWithTag + 8) = PoolWithTag;
          *(_QWORD *)PoolWithTag = PoolWithTag;
          *(_QWORD *)(PoolWithTag + 24) = v27;
          *(_QWORD *)(PoolWithTag + 32) = LegacyBusDeviceNode;
          v29 = *(unsigned __int64 **)(LegacyBusDeviceNode + 512);
          if ( *v29 != LegacyBusDeviceNode + 504 )
            __fastfail(3u);
          *(_QWORD *)(PoolWithTag + 8) = v29;
          v30 = v27 != 0;
          v13 = v36;
          *(_QWORD *)PoolWithTag = LegacyBusDeviceNode + 504;
          *v29 = PoolWithTag;
          v14 = PoolWithTag & -(__int64)v30;
          *(_QWORD *)(LegacyBusDeviceNode + 512) = PoolWithTag;
          v32 = v14;
          goto LABEL_20;
        }
        v31 = 0LL;
        v37 = 0LL;
      }
      v22 = (char *)ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x20207050u);
      v23 = (unsigned __int64)v22;
      if ( !v22 )
        return 3221225626LL;
      *((_WORD *)v22 + 52) = 0;
      *((_QWORD *)v22 + 12) = v22 + 88;
      *((_QWORD *)v22 + 11) = v22 + 88;
      *((_QWORD *)v22 + 10) = v22 + 72;
      *((_QWORD *)v22 + 9) = v22 + 72;
      v24 = v22 + 40;
      *((_QWORD *)v22 + 6) = v22 + 40;
      v25 = v22 + 56;
      *v24 = v24;
      v25[1] = v25;
      *v25 = v25;
      *(_QWORD *)(v23 + 8) = v23;
      *(_QWORD *)v23 = v23;
      *(_BYTE *)(v23 + 16) = v7;
      *(_QWORD *)(v23 + 32) = LegacyBusDeviceNode;
      v26 = *(unsigned __int64 **)(LegacyBusDeviceNode + 496);
      if ( *v26 != LegacyBusDeviceNode + 488 )
        __fastfail(3u);
      *(_QWORD *)v23 = LegacyBusDeviceNode + 488;
      *(_QWORD *)(v23 + 8) = v26;
      *v26 = v23;
      *(_QWORD *)(LegacyBusDeviceNode + 496) = v23;
      *(_QWORD *)(v23 + 24) = v31;
      v12 = v23 & -(__int64)(v31 != 0);
      v38 = v12;
      goto LABEL_14;
    }
    v9 = 1;
    v35 = 1;
    LegacyBusDeviceNode = IopFindLegacyBusDeviceNode(*a1, a1[1]);
    if ( LegacyBusDeviceNode == v15 && !**(_DWORD **)(*((_QWORD *)a1 + 2) + 8LL) )
      LegacyBusDeviceNode = IopFindLegacyBusDeviceNode(1LL, 0LL);
LABEL_25:
    if ( !LegacyBusDeviceNode )
      break;
    v4 = v34;
  }
  if ( !v5 )
    return 3221225610LL;
  return 0LL;
}
