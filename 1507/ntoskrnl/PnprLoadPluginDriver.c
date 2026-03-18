/*
 * XREFs of PnprLoadPluginDriver @ 0x1406904E8
 * Callers:
 *     PnpReplacePartitionUnit @ 0x14068E9D4 (PnpReplacePartitionUnit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MmUnloadSystemImage @ 0x140452B3C (MmUnloadSystemImage.c)
 *     MmLoadSystemImage @ 0x140574658 (MmLoadSystemImage.c)
 *     PnprGetPluginDriverImagePath @ 0x14068FE44 (PnprGetPluginDriverImagePath.c)
 */

__int64 __fastcall PnprLoadPluginDriver(PVOID **a1, _DWORD *a2)
{
  int PluginDriverImagePath; // ebx
  int v5; // eax
  PVOID *v6; // rsi
  SIZE_T v7; // rcx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  SIZE_T v11; // rdx
  int v12; // eax
  int v13; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  PVOID *v16; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v16 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  PluginDriverImagePath = PnprGetPluginDriverImagePath(&DestinationString);
  if ( PluginDriverImagePath < 0 )
    goto LABEL_26;
  v5 = MmLoadSystemImage((__int64)&DestinationString, 0LL, 0LL, 2u, &v16, &v17);
  v6 = v16;
  PluginDriverImagePath = v5;
  if ( v5 >= 0 )
  {
    memset(a2, 0, 0x60uLL);
    a2[1] = 1;
    *a2 = 96;
    PluginDriverImagePath = ((__int64 (__fastcall *)(_DWORD *, _QWORD))v6[7])(a2, 0LL);
    if ( PluginDriverImagePath >= 0 )
    {
      if ( *a2 >= 0x40u && *((_QWORD *)a2 + 7) && *((_QWORD *)a2 + 3) && *((_QWORD *)a2 + 4) )
      {
        *a1 = v6;
        PluginDriverImagePath = 0;
        goto LABEL_26;
      }
      v11 = PnprContext;
      PluginDriverImagePath = -1073741637;
      v12 = *(_DWORD *)(PnprContext + 10744);
      if ( !v12 )
        v12 = 4878;
      *(_DWORD *)(PnprContext + 10744) = v12;
      v13 = *(_DWORD *)(v11 + 10748);
      if ( !v13 )
        v13 = 9;
      *(_DWORD *)(v11 + 10748) = v13;
      goto LABEL_23;
    }
    v7 = PnprContext;
    v8 = *(_DWORD *)(PnprContext + 10744);
    if ( !v8 )
      v8 = 4862;
    v9 = 8;
  }
  else
  {
    v7 = PnprContext;
    v8 = *(_DWORD *)(PnprContext + 10744);
    if ( !v8 )
      v8 = 4848;
    v9 = 10;
  }
  *(_DWORD *)(v7 + 10744) = v8;
  v10 = *(_DWORD *)(v7 + 10748);
  if ( !v10 )
    v10 = v9;
  *(_DWORD *)(v7 + 10748) = v10;
LABEL_23:
  if ( PluginDriverImagePath < 0 && v6 )
    MmUnloadSystemImage((ULONG_PTR)v6);
LABEL_26:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0x51706E50u);
  return (unsigned int)PluginDriverImagePath;
}
