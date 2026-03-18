/*
 * XREFs of WmipAddDataSource @ 0x140501BD8
 * Callers:
 *     WmipProcessWmiRegInfo @ 0x140501AE8 (WmipProcessWmiRegInfo.c)
 *     WmipInitializeDataStructs @ 0x140752FF4 (WmipInitializeDataStructs.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     WmipGenerateRegistrationNotification @ 0x1403D1930 (WmipGenerateRegistrationNotification.c)
 *     WmipUnreferenceEntry @ 0x1403D3420 (WmipUnreferenceEntry.c)
 *     WmipLegacyEtwWorker @ 0x1404C4D60 (WmipLegacyEtwWorker.c)
 *     WmipBuildInstanceSet @ 0x140501EDC (WmipBuildInstanceSet.c)
 *     WmipLinkDataSourceToList @ 0x1405024B0 (WmipLinkDataSourceToList.c)
 *     WmipCountedToSz @ 0x1405025E0 (WmipCountedToSz.c)
 *     WmipAllocDataSource @ 0x140502648 (WmipAllocDataSource.c)
 *     WmipAllocEntry @ 0x140502690 (WmipAllocEntry.c)
 *     WmipAddMofResource @ 0x1405234A4 (WmipAddMofResource.c)
 *     WmipGenerateMofResourceNotification @ 0x140543820 (WmipGenerateMofResourceNotification.c)
 *     WmipGenerateBinaryMofNotification @ 0x14054471C (WmipGenerateBinaryMofNotification.c)
 */

__int64 __fastcall WmipAddDataSource(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  ULONG_PTR v5; // rbx
  __int64 v7; // rbp
  int v8; // edi
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned int v13; // r15d
  int v14; // eax
  _QWORD **v15; // rsi
  char v16; // r15
  __int64 v17; // rdx
  int v18; // edi
  _WORD *v19; // rsi
  _WORD *v20; // rdi
  _QWORD *v22; // r14
  __int64 **v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // rax
  bool v27; // zf
  _QWORD *v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rbp
  __int64 v31; // rax
  __int64 **v32; // r15
  __int64 *v33; // rcx
  __int64 v34; // rax
  __int64 *v35; // r14
  __int64 v36; // rax
  _QWORD v37[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v38[9]; // [rsp+40h] [rbp-48h] BYREF
  char v39; // [rsp+90h] [rbp+8h] BYREF
  int v40; // [rsp+A0h] [rbp+18h]
  __int64 v41; // [rsp+A8h] [rbp+20h]

  v41 = a4;
  v40 = a3;
  v5 = *(_QWORD *)(a1 + 32);
  v7 = a4;
  v39 = 0;
  v8 = a3;
  v10 = 0LL;
  if ( !v5 )
  {
    v11 = WmipAllocDataSource();
    v5 = v11;
    if ( !v11 )
      return (unsigned int)-1073741670;
    *(_DWORD *)(v11 + 56) = *(_DWORD *)(a1 + 56);
    v39 = 1;
  }
  v12 = a2 + 24;
  v13 = 0;
  if ( !*(_DWORD *)(a2 + 16) )
  {
LABEL_9:
    v15 = 0LL;
    if ( (*(_DWORD *)(a1 + 48) & 0x40000000) != 0 )
    {
      v37[1] = v37;
      v15 = (_QWORD **)v37;
      v37[0] = v37;
      v38[1] = v38;
      v38[0] = v38;
    }
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v16 = v39;
    LOBYTE(v17) = v39;
    v18 = WmipLinkDataSourceToList(v5, v17, v15);
    KeReleaseMutex(&WmipSMMutex, 0);
    if ( v15 )
    {
      while ( 1 )
      {
        v22 = *v15;
        if ( *v15 == v15 )
          break;
        v31 = *v22;
        if ( (_QWORD **)v22[1] != v15 || *(_QWORD **)(v31 + 8) != v22 )
          __fastfail(3u);
        *v15 = (_QWORD *)v31;
        *(_QWORD *)(v31 + 8) = v15;
        WmipLegacyEtwWorker(v22[2]);
        v32 = (__int64 **)(v22 + 5);
        while ( *v32 != (__int64 *)v32 )
        {
          v33 = *v32;
          v34 = **v32;
          if ( (__int64 **)(*v32)[1] != v32 || *(__int64 **)(v34 + 8) != v33 )
            __fastfail(3u);
          *v32 = (__int64 *)v34;
          *(_QWORD *)(v34 + 8) = v32;
          KeSetEvent((PRKEVENT)(v33 + 2), 0, 0);
        }
        ExFreePoolWithTag(v22, 0x70696D57u);
      }
      v23 = v15 + 2;
      while ( *v23 != (__int64 *)v23 )
      {
        v35 = *v23;
        v36 = **v23;
        if ( (__int64 **)(*v23)[1] != v23 || *(__int64 **)(v36 + 8) != v35 )
          __fastfail(3u);
        *v23 = (__int64 *)v36;
        *(_QWORD *)(v36 + 8) = v23;
        KeWaitForSingleObject(v35 + 4, Executive, 0, 0, 0LL);
        ExFreePoolWithTag(v35, 0x70696D57u);
      }
      v16 = v39;
    }
    if ( v18 >= 0 )
    {
      *(_QWORD *)(a1 + 32) = v5;
      if ( v10 )
        WmipGenerateBinaryMofNotification(v10, &GUID_MOF_RESOURCE_ADDED_NOTIFICATION);
      if ( v7 )
        v19 = (_WORD *)WmipCountedToSz(v7);
      else
        v19 = 0LL;
      if ( a5 )
        v20 = (_WORD *)WmipCountedToSz(a5);
      else
        v20 = 0LL;
      if ( v19 )
      {
        if ( *v19 && v20 && *v20 && (int)WmipAddMofResource(v5, v19, 0LL, v20, &v39) >= 0 && v39 )
          WmipGenerateMofResourceNotification(v19, v20);
        ExFreePoolWithTag(v19, 0);
      }
      if ( v20 )
        ExFreePoolWithTag(v20, 0);
      WmipGenerateRegistrationNotification(v5, 1u);
      v5 = 0LL;
      v18 = 0;
    }
    goto LABEL_23;
  }
  while ( 1 )
  {
    v14 = *(_DWORD *)(v12 + 16);
    if ( (v14 & 0x10000) != 0 || (v14 & 0x81000) == 0x80000 )
      goto LABEL_7;
    v24 = WmipAllocEntry(&WmipISChunkInfo);
    v25 = v24;
    if ( !v24 )
      break;
    *(_DWORD *)(v24 + 16) |= 8u;
    *(_QWORD *)(v24 + 56) = v12;
    *(_QWORD *)(v24 + 64) = v5;
    v18 = WmipBuildInstanceSet(v12, a2, v8, v24, *(_DWORD *)(v5 + 56));
    v26 = *(_QWORD *)v12 - WmipBinaryMofGuid;
    if ( *(_QWORD *)v12 == WmipBinaryMofGuid )
      v26 = *(_QWORD *)(v12 + 8) - 0x102906C9A000F0B2LL;
    v27 = v26 == 0;
    v28 = (_QWORD *)(v5 + 40);
    v29 = *(_QWORD *)(v5 + 40);
    if ( v27 )
      v10 = v25;
    *(_QWORD *)(v25 + 48) = v28;
    v30 = (_QWORD *)(v25 + 40);
    *v30 = v29;
    if ( *(_QWORD **)(v29 + 8) != v28 )
      __fastfail(3u);
    *(_QWORD *)(v29 + 8) = v30;
    *v28 = v30;
    if ( v18 < 0 )
      goto LABEL_46;
    v8 = v40;
LABEL_7:
    ++v13;
    v12 += 32LL;
    if ( v13 >= *(_DWORD *)(a2 + 16) )
    {
      v7 = v41;
      goto LABEL_9;
    }
  }
  v18 = -1073741670;
LABEL_46:
  v16 = v39;
LABEL_23:
  if ( v5 && v16 )
  {
    *(_DWORD *)(v5 + 16) |= 1u;
    WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, (volatile signed __int64 *)v5);
  }
  return (unsigned int)v18;
}
