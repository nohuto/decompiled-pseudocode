/*
 * XREFs of PnprLoadPluginDriver @ 0x140644C64
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1406431B8 (PnpReplacePartitionUnit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MmLoadSystemImage @ 0x140481880 (MmLoadSystemImage.c)
 *     MmUnloadSystemImage @ 0x1405462A8 (MmUnloadSystemImage.c)
 *     PnprGetPluginDriverImagePath @ 0x1406445C0 (PnprGetPluginDriverImagePath.c)
 */

__int64 __fastcall PnprLoadPluginDriver(ULONG_PTR *a1, _DWORD *a2)
{
  int PluginDriverImagePath; // ebx
  int v5; // eax
  ULONG_PTR v6; // rsi
  SIZE_T v7; // rcx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  SIZE_T v11; // rdx
  int v12; // eax
  int v13; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+18h] BYREF
  char *v17; // [rsp+78h] [rbp+20h] BYREF

  BugCheckParameter2 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  PluginDriverImagePath = PnprGetPluginDriverImagePath(&DestinationString);
  if ( PluginDriverImagePath < 0 )
    goto LABEL_26;
  v5 = MmLoadSystemImage((__int64)&DestinationString, 0LL, 0LL, 2u, (PVOID **)&BugCheckParameter2, &v17);
  v6 = BugCheckParameter2;
  PluginDriverImagePath = v5;
  if ( v5 >= 0 )
  {
    memset(a2, 0, 0x60uLL);
    a2[1] = 1;
    *a2 = 96;
    PluginDriverImagePath = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(v6 + 56))(a2, 0LL);
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
        v12 = 4870;
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
      v8 = 4854;
    v9 = 8;
  }
  else
  {
    v7 = PnprContext;
    v8 = *(_DWORD *)(PnprContext + 10744);
    if ( !v8 )
      v8 = 4840;
    v9 = 10;
  }
  *(_DWORD *)(v7 + 10744) = v8;
  v10 = *(_DWORD *)(v7 + 10748);
  if ( !v10 )
    v10 = v9;
  *(_DWORD *)(v7 + 10748) = v10;
LABEL_23:
  if ( PluginDriverImagePath < 0 && v6 )
    MmUnloadSystemImage(v6);
LABEL_26:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0x51706E50u);
  return (unsigned int)PluginDriverImagePath;
}
