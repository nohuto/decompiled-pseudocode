/*
 * XREFs of ?QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0127B00
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000AC0C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000B014 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0019400 (-GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall QueryVidPnExclusiveOwnershipCallBack(struct DXGADAPTER *a1, char *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  __int64 v11; // rax
  unsigned int i; // ebp
  int VidPnSourceOwnerType; // r14d
  struct DXGDEVICE *VidPnSourceOwnerEmulated; // rax
  struct DXGDEVICE *v15; // r15
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  _BYTE v22[64]; // [rsp+20h] [rbp-58h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v22);
  v9 = 0;
  if ( v4 >= 0 )
  {
    v11 = *((_QWORD *)a1 + 247);
    for ( i = 0; i < *(_DWORD *)(v11 + 80); ++i )
    {
      VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)v11, i);
      VidPnSourceOwnerEmulated = ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(*((DXGADAPTER ***)a1 + 247), i);
      v15 = VidPnSourceOwnerEmulated;
      if ( !VidPnSourceOwnerEmulated )
        VidPnSourceOwnerEmulated = ADAPTER_DISPLAY::GetVidPnSourceOwner(*((DXGADAPTER ***)a1 + 247), i);
      if ( v15 )
        VidPnSourceOwnerType = 4;
      if ( (unsigned int)(VidPnSourceOwnerType - 2) <= 2 && *((_QWORD *)VidPnSourceOwnerEmulated + 5) == *(_QWORD *)a2 )
      {
        v16 = 1008LL * i;
        v17 = *(_QWORD *)(*((_QWORD *)a1 + 247) + 112LL);
        if ( *(_DWORD *)(v16 + v17 + 636) - *(_DWORD *)(v16 + v17 + 628) == *((_DWORD *)a2 + 4) - *((_DWORD *)a2 + 2) )
        {
          v18 = (unsigned int)(*(_DWORD *)(v16 + v17 + 640) - *(_DWORD *)(v16 + v17 + 632));
          v19 = (unsigned int)(*((_DWORD *)a2 + 5) - *((_DWORD *)a2 + 3));
          if ( (_DWORD)v18 == (_DWORD)v19 )
          {
            if ( *((_DWORD *)a2 + 6) != -1 )
            {
              v20 = WdLogNewEntry5_WdAssertion(v19, v18, v16, v17);
              *(_QWORD *)(v20 + 24) = 31307LL;
              WdLogEvent5_WdAssertion(v20);
            }
            *((_DWORD *)a2 + 6) = i;
            *(_QWORD *)(a2 + 28) = *(_QWORD *)((char *)a1 + 252);
            *((_DWORD *)a2 + 9) = VidPnSourceOwnerType;
          }
        }
      }
      v11 = *((_QWORD *)a1 + 247);
    }
  }
  else if ( v4 == -1073741130 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v10[3] = a1;
    v10[4] = (int)HIDWORD(*(_QWORD *)((char *)a1 + 252));
    v10[5] = *((unsigned int *)a1 + 63);
  }
  else
  {
    v9 = v4;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v22);
  return v9;
}
