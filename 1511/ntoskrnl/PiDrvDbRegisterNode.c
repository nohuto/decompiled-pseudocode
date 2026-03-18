/*
 * XREFs of PiDrvDbRegisterNode @ 0x1405251A4
 * Callers:
 *     PiDrvDbInit @ 0x1405250C8 (PiDrvDbInit.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140003C28 (RtlStringCchPrintfW.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     DrvDbRegisterDatabase @ 0x1405245A4 (DrvDbRegisterDatabase.c)
 *     PiDrvDbCreateNode @ 0x140525298 (PiDrvDbCreateNode.c)
 *     PiDrvDbDestroyNode @ 0x140618064 (PiDrvDbDestroyNode.c)
 */

__int64 __fastcall PiDrvDbRegisterNode(const WCHAR *a1, char a2)
{
  wchar_t *PoolWithTag; // rsi
  int Node; // eax
  __int64 v6; // rbx
  int v7; // edi
  SIZE_T v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  int v12; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0LL;
  PoolWithTag = 0LL;
  Node = PiDrvDbCreateNode(a1, (__int64)&v13);
  v6 = v13;
  v7 = Node;
  if ( Node >= 0 )
  {
    if ( (*(_DWORD *)(v13 + 64) & 1) != 0 )
      goto LABEL_6;
    v8 = (unsigned int)*(unsigned __int16 *)(v13 + 32) + 32;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v8, 0x62647050u);
    if ( !PoolWithTag )
    {
      v7 = -1073741670;
      goto LABEL_9;
    }
    v7 = RtlStringCchPrintfW(PoolWithTag, v8 >> 1, L"%wZ\\%ws", v6 + 32, L"DriverDatabase");
    if ( v7 >= 0 )
    {
      v7 = DrvDbRegisterDatabase(v9, a1, v10, (__int64)PoolWithTag, (a2 & 8) != 0, v12, v6);
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
