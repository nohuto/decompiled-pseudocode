/*
 * XREFs of WmipOpenBlock @ 0x1404A9494
 * Callers:
 *     WmipIoControl @ 0x1404A915C (WmipIoControl.c)
 *     IoWMIOpenBlock @ 0x14058240C (IoWMIOpenBlock.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     WmipFindGEByGuid @ 0x1404A9D94 (WmipFindGEByGuid.c)
 *     WmipOpenGuidObject @ 0x1404AA004 (WmipOpenGuidObject.c)
 *     WmipEnableCollectOrEvent @ 0x1404AB4A8 (WmipEnableCollectOrEvent.c)
 *     WmipIsQuerySetGuid @ 0x1404AB7C8 (WmipIsQuerySetGuid.c)
 *     WmipAllocGuidEntry @ 0x1405B2AE8 (WmipAllocGuidEntry.c)
 */

__int64 __fastcall WmipOpenBlock(int a1, __int64 a2, __int64 a3, unsigned int a4, _QWORD *a5)
{
  unsigned __int64 v5; // rax
  char v6; // bp
  __int64 v8; // rcx
  int v9; // edi
  char *v10; // rbx
  ULONG_PTR GEByGuid; // rdi
  _QWORD *v12; // rdx
  char *v13; // rax
  __int64 v15; // rax
  ULONG_PTR *v16; // rax
  __int64 v17; // rcx
  char *v18; // rax
  _QWORD *v19; // rdx
  PVOID Object[5]; // [rsp+30h] [rbp-28h] BYREF

  Object[0] = 0LL;
  v5 = (unsigned int)(a1 - 2244872);
  v6 = a2;
  if ( (unsigned int)v5 > 0x38 )
    return (unsigned int)-1073741649;
  v8 = 0x110000000000001LL;
  if ( !_bittest64(&v8, v5) )
    return (unsigned int)-1073741649;
  v9 = WmipOpenGuidObject(a3, a2, a4, Object);
  if ( v9 >= 0 )
  {
    v10 = (char *)Object[0];
    *((_DWORD *)Object[0] + 16) = a1;
    if ( a1 == 2244872 )
    {
      *((_DWORD *)v10 + 41) |= 1u;
    }
    else
    {
      GEByGuid = WmipFindGEByGuid(v10 + 24, 0LL);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      if ( GEByGuid )
      {
        v12 = *(_QWORD **)(GEByGuid + 48);
        v13 = v10 + 40;
        *((_QWORD *)v10 + 5) = GEByGuid + 40;
        *((_QWORD *)v10 + 6) = v12;
        if ( *v12 != GEByGuid + 40 )
          __fastfail(3u);
        *v12 = v13;
        *(_QWORD *)(GEByGuid + 48) = v13;
      }
      *((_QWORD *)v10 + 7) = GEByGuid;
      KeReleaseMutex(&WmipSMMutex, 0);
      if ( a1 == 2244924 )
      {
        if ( !GEByGuid || *(_DWORD *)(GEByGuid + 36) == a1 - 2244924 || !(unsigned __int8)WmipIsQuerySetGuid(GEByGuid) )
        {
          v9 = -1073741163;
          goto LABEL_17;
        }
LABEL_12:
        if ( !v6 )
          *((_DWORD *)v10 + 41) |= 2u;
        if ( GEByGuid )
        {
LABEL_15:
          v9 = WmipEnableCollectOrEvent(GEByGuid);
          if ( v9 < 0 )
            goto LABEL_17;
          goto LABEL_16;
        }
        KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
        v15 = WmipAllocGuidEntry();
        GEByGuid = v15;
        if ( v15 )
        {
          *(_OWORD *)(v15 + 72) = *(_OWORD *)(v10 + 24);
          v16 = (ULONG_PTR *)WmipGEHeadPtr;
          v17 = *(_QWORD *)WmipGEHeadPtr;
          *(_QWORD *)GEByGuid = *(_QWORD *)WmipGEHeadPtr;
          *(_QWORD *)(GEByGuid + 8) = v16;
          if ( *(ULONG_PTR **)(v17 + 8) != v16 )
            __fastfail(3u);
          *(_QWORD *)(v17 + 8) = GEByGuid;
          *v16 = GEByGuid;
          v18 = v10 + 40;
          v19 = *(_QWORD **)(GEByGuid + 48);
          *((_QWORD *)v10 + 5) = GEByGuid + 40;
          *((_QWORD *)v10 + 6) = v19;
          if ( *v19 != GEByGuid + 40 )
            __fastfail(3u);
          *v19 = v18;
          *(_QWORD *)(GEByGuid + 48) = v18;
          *((_QWORD *)v10 + 7) = GEByGuid;
          KeReleaseMutex(&WmipSMMutex, 0);
          goto LABEL_15;
        }
        KeReleaseMutex(&WmipSMMutex, 0);
        v9 = -1073741670;
LABEL_17:
        if ( v10 )
          ObfDereferenceObject(v10);
        return (unsigned int)v9;
      }
      if ( a1 == 2244928 )
        goto LABEL_12;
    }
LABEL_16:
    *a5 = v10;
    v10 = 0LL;
    v9 = 0;
    goto LABEL_17;
  }
  return (unsigned int)v9;
}
