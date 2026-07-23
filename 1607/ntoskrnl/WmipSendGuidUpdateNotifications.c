/*
 * XREFs of WmipSendGuidUpdateNotifications @ 0x140537F5C
 * Callers:
 *     WmipGenerateRegistrationNotification @ 0x140537C90 (WmipGenerateRegistrationNotification.c)
 *     WmipUpdateDataSource @ 0x14069F4A4 (WmipUpdateDataSource.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x1400C265C (RtlStringCbCopyW.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     WmipProcessEvent @ 0x140538080 (WmipProcessEvent.c)
 */

void __fastcall WmipSendGuidUpdateNotifications(int a1, unsigned int a2, _OWORD **a3)
{
  int v6; // esi
  unsigned int v7; // r15d
  char *PoolWithTag; // rax
  char *v9; // rbx
  __int64 v10; // rax
  char *v11; // rcx
  __int64 v12; // r8
  _OWORD *v13; // rax
  __int128 v14; // [rsp+20h] [rbp-10h]

  *(_QWORD *)&v14 = 0x11D0E777B48D49A1LL;
  v6 = 16 * a2 + 8;
  *((_QWORD *)&v14 + 1) = 0x102906C9A0000CA5LL;
  v7 = 16 * a2 + 110;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v7, 0x70696D57u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v7);
    *(_DWORD *)v9 = v7;
    *((_DWORD *)v9 + 11) = 10;
    *(_OWORD *)(v9 + 24) = v14;
    *((_DWORD *)v9 + 12) = 64;
    *((_DWORD *)v9 + 14) = 96;
    *((_DWORD *)v9 + 15) = v6;
    *((_WORD *)v9 + 32) = 28;
    RtlStringCbCopyW((NTSTRSAFE_PWSTR)v9 + 33, 0x1CuLL, L"REGUPDATEINFO");
    v10 = *((unsigned int *)v9 + 14);
    v11 = &v9[v10 + 8];
    *(_DWORD *)&v9[v10] = a1;
    *(_DWORD *)&v9[v10 + 4] = a2;
    if ( a2 )
    {
      v12 = a2;
      do
      {
        v13 = *a3;
        a3 += 2;
        *(_OWORD *)v11 = *v13;
        v11 += 16;
        --v12;
      }
      while ( v12 );
    }
    WmipProcessEvent(v9);
    ExFreePoolWithTag(v9, 0);
  }
}
