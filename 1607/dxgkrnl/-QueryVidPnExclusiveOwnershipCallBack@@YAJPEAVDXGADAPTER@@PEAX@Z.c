/*
 * XREFs of ?QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C014E500
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0006B3C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C001CE68 (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0020D58 (-GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall QueryVidPnExclusiveOwnershipCallBack(struct DXGADAPTER *a1, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rax
  __int64 v9; // rax
  unsigned int i; // esi
  int VidPnSourceOwnerType; // ebp
  __int64 v12; // rcx
  const struct tagRECT *ContentRect; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v17, a1, 1);
  if ( *((_DWORD *)a1 + 44) == 1 )
  {
    v9 = *((_QWORD *)a1 + 266);
    for ( i = 0; i < *(_DWORD *)(v9 + 80); ++i )
    {
      VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)v9, i);
      if ( ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(*((DXGADAPTER ***)a1 + 266), i) )
        VidPnSourceOwnerType = 4;
      if ( (unsigned int)(VidPnSourceOwnerType - 2) <= 2 )
      {
        v12 = *((_QWORD *)a1 + 266);
        if ( *(_QWORD *)(1016LL * i + *(_QWORD *)(v12 + 112) + 696) == *(_QWORD *)a2 )
        {
          ContentRect = ADAPTER_DISPLAY::GetContentRect((DXGADAPTER **)v12, i);
          if ( ContentRect->left == a2[2] && ContentRect->right == a2[4] && ContentRect->top == a2[3] )
          {
            v14 = a2[5];
            if ( ContentRect->bottom == (_DWORD)v14 )
            {
              if ( a2[6] != -1 )
              {
                v15 = WdLogNewEntry5_WdAssertion(v14);
                *(_QWORD *)(v15 + 24) = 7348LL;
                WdLogEvent5_WdAssertion(v15);
              }
              a2[6] = i;
              *(_QWORD *)(a2 + 7) = *(_QWORD *)((char *)a1 + 268);
              a2[9] = VidPnSourceOwnerType;
            }
          }
        }
      }
      v9 = *((_QWORD *)a1 + 266);
    }
  }
  else
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v5, v4, v6, v7);
    v8[3] = a1;
    v8[4] = *((int *)a1 + 68);
    v8[5] = *((unsigned int *)a1 + 67);
  }
  if ( v17[16] )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
  return 0LL;
}
