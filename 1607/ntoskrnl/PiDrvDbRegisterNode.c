/*
 * XREFs of PiDrvDbRegisterNode @ 0x140552028
 * Callers:
 *     PiDrvDbInit @ 0x140551F4C (PiDrvDbInit.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14007F58C (RtlStringCchPrintfW.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PiDrvDbCreateNode @ 0x14055211C (PiDrvDbCreateNode.c)
 *     DrvDbRegisterDatabase @ 0x140579054 (DrvDbRegisterDatabase.c)
 *     PiDrvDbDestroyNode @ 0x14064CE68 (PiDrvDbDestroyNode.c)
 */

__int64 __fastcall PiDrvDbRegisterNode(const WCHAR *a1, char a2)
{
  int v3; // r14d
  wchar_t *PoolWithTag; // rsi
  int Node; // eax
  __int64 v6; // rbx
  int v7; // edi
  SIZE_T v8; // rdi
  int v9; // ecx
  int v10; // r8d
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v12 = 0LL;
  v3 = (int)a1;
  PoolWithTag = 0LL;
  Node = PiDrvDbCreateNode(a1, (__int64)&v12);
  v6 = v12;
  v7 = Node;
  if ( Node >= 0 )
  {
    if ( (*(_DWORD *)(v12 + 64) & 1) != 0 )
      goto LABEL_6;
    v8 = (unsigned int)*(unsigned __int16 *)(v12 + 32) + 32;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v8, 0x62647050u);
    if ( !PoolWithTag )
    {
      v7 = -1073741670;
      goto LABEL_9;
    }
    v7 = RtlStringCchPrintfW(PoolWithTag, v8 >> 1, L"%wZ\\%ws", v6 + 32, L"DriverDatabase");
    if ( v7 >= 0 )
    {
      v7 = DrvDbRegisterDatabase(v9, v3, v10, (_DWORD)PoolWithTag, (a2 & 8) != 0);
      if ( v7 >= 0 )
LABEL_6:
        v6 = 0LL;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
LABEL_9:
  if ( v6 )
    PiDrvDbDestroyNode(v6);
  return (unsigned int)v7;
}
