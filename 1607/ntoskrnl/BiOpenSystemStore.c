/*
 * XREFs of BiOpenSystemStore @ 0x14053C49C
 * Callers:
 *     BcdOpenSystemStore @ 0x14053C46C (BcdOpenSystemStore.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x14012E4F0 (BiSetFirmwareModified.c)
 *     BiWasFirmwareModified @ 0x14012E534 (BiWasFirmwareModified.c)
 *     _wcsnicmp @ 0x14014DE10 (_wcsnicmp.c)
 *     wcstoul @ 0x14014FA4C (wcstoul.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     BiLoadSystemStore @ 0x14053BB20 (BiLoadSystemStore.c)
 *     BiCloseStore @ 0x14053BC34 (BiCloseStore.c)
 *     BiGetFirmwareType @ 0x14053C62C (BiGetFirmwareType.c)
 *     BiCleanupLoadedStores @ 0x14053C6A0 (BiCleanupLoadedStores.c)
 *     BiEnumerateSubKeys @ 0x14053C7E0 (BiEnumerateSubKeys.c)
 *     BiOpenKeyNonBcd @ 0x14053CAC0 (BiOpenKeyNonBcd.c)
 *     BiIsSystemStore @ 0x14053D918 (BiIsSystemStore.c)
 *     BiOpenKey @ 0x14053E38C (BiOpenKey.c)
 *     BiCloseKey @ 0x14053E50C (BiCloseKey.c)
 *     BiBindEfiNamespaceObjects @ 0x1406D3AF8 (BiBindEfiNamespaceObjects.c)
 */

__int64 __fastcall BiOpenSystemStore(_QWORD *a1, unsigned int a2)
{
  _QWORD *v2; // r12
  HANDLE v3; // rbx
  int v4; // r13d
  int v5; // edi
  int v6; // eax
  const wchar_t **v7; // r14
  unsigned int v8; // esi
  __int64 v9; // rdi
  int v10; // eax
  bool v11; // si
  int v12; // eax
  int v14; // eax
  int v15; // eax
  PVOID P[2]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v18; // [rsp+78h] [rbp+48h] BYREF
  HANDLE v19; // [rsp+80h] [rbp+50h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+58h] BYREF

  v18 = a2;
  *a1 = 0LL;
  v2 = a1;
  Handle = 0LL;
  v3 = 0LL;
  P[0] = 0LL;
  v19 = 0LL;
  v4 = 0;
  BiCleanupLoadedStores(0LL);
  v5 = BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 983103LL, &Handle);
  if ( v5 < 0 )
    goto LABEL_18;
  v6 = BiEnumerateSubKeys(Handle, P, &v18);
  v7 = (const wchar_t **)P[0];
  v5 = v6;
  if ( v6 < 0 )
    goto LABEL_16;
  v8 = v18;
  v9 = 0LL;
  if ( !v18 )
    goto LABEL_7;
  do
  {
    if ( wcsnicmp(v7[v9], L"BCD", 3uLL) )
      goto LABEL_5;
    if ( wcstoul(v7[v9] + 3, 0LL, 10) == -1 )
      goto LABEL_5;
    v14 = BiOpenKey(Handle, v7[v9], 131097LL, &v19);
    v3 = v19;
    if ( v14 < 0 )
      goto LABEL_5;
    if ( (unsigned __int8)BiIsSystemStore(v19) )
      break;
    BiCloseKey(v3);
LABEL_5:
    v9 = (unsigned int)(v9 + 1);
  }
  while ( (unsigned int)v9 < v8 );
  v2 = a1;
LABEL_7:
  if ( (_DWORD)v9 != v8 )
  {
LABEL_10:
    v11 = BiWasFirmwareModified((__int64)v3);
    v12 = BiGetFirmwareType() - 1;
    if ( v12 )
    {
      v15 = v12 - 1;
      if ( v15 )
      {
        if ( v15 == 1 )
        {
          v5 = 0;
LABEL_13:
          if ( !v11 )
            BiSetFirmwareModified((__int64)v3, 0);
          *v2 = v3;
          goto LABEL_16;
        }
        v5 = -1073741637;
      }
      else
      {
        v5 = BiBindEfiNamespaceObjects(v3);
      }
    }
    else
    {
      v5 = 0;
    }
    if ( v5 < 0 )
      goto LABEL_30;
    goto LABEL_13;
  }
  v19 = 0LL;
  v10 = BiLoadSystemStore(&v19);
  v3 = v19;
  v5 = v10;
  if ( v10 >= 0 )
  {
    v4 = 1;
    goto LABEL_10;
  }
LABEL_30:
  if ( v3 )
    BiCloseStore((__int64)v3, v4 != 0 ? 2 : 0);
LABEL_16:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x4B444342u);
LABEL_18:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v5;
}
