/*
 * XREFs of WmipSendEnableRequest @ 0x1404C9764
 * Callers:
 *     WmipEnableCollectOrEvent @ 0x1404C9514 (WmipEnableCollectOrEvent.c)
 * Callees:
 *     WmipSendEnableDisableRequest @ 0x1403D2308 (WmipSendEnableDisableRequest.c)
 *     WmipUnreferenceEntry @ 0x1403D3420 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x1403D39DC (WmipReferenceEntry.c)
 *     WmipReleaseCollectionEnabled @ 0x14048C508 (WmipReleaseCollectionEnabled.c)
 *     WmipWaitForCollectionEnabled @ 0x14065FBD4 (WmipWaitForCollectionEnabled.c)
 */

__int64 __fastcall WmipSendEnableRequest(ULONG_PTR BugCheckParameter2, char a2)
{
  int v4; // ecx
  int v5; // edi
  unsigned int v6; // ebp
  int v7; // eax

  if ( a2 )
  {
    v4 = *(_DWORD *)(BugCheckParameter2 + 88);
    v5 = 2;
    *(_DWORD *)(BugCheckParameter2 + 88) = v4 + 1;
  }
  else
  {
    v4 = *(_DWORD *)(BugCheckParameter2 + 92);
    v5 = 4;
    *(_DWORD *)(BugCheckParameter2 + 92) = v4 + 1;
  }
  if ( v4 || (v5 & *(_DWORD *)(BugCheckParameter2 + 16)) != 0 )
  {
    if ( !a2 && (v5 & *(_DWORD *)(BugCheckParameter2 + 16)) != 0 )
      WmipWaitForCollectionEnabled(BugCheckParameter2);
    return 0;
  }
  else
  {
    WmipReferenceEntry(BugCheckParameter2);
    *(_DWORD *)(BugCheckParameter2 + 16) |= v5;
    do
    {
      v6 = WmipSendEnableDisableRequest(a2 != 0 ? 4 : 6, BugCheckParameter2, a2);
      if ( a2 )
        v7 = *(_DWORD *)(BugCheckParameter2 + 88);
      else
        v7 = *(_DWORD *)(BugCheckParameter2 + 92);
      if ( v7 )
        break;
      v6 = WmipSendEnableDisableRequest(a2 != 0 ? 5 : 7, BugCheckParameter2, a2);
    }
    while ( a2 ? *(_DWORD *)(BugCheckParameter2 + 88) : *(_DWORD *)(BugCheckParameter2 + 92) );
    *(_DWORD *)(BugCheckParameter2 + 16) &= ~v5;
    if ( !a2 )
      WmipReleaseCollectionEnabled(BugCheckParameter2);
    WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, (volatile signed __int64 *)BugCheckParameter2);
  }
  return v6;
}
