/*
 * XREFs of BiOpenSystemStore @ 0x1404FB6E8
 * Callers:
 *     BcdOpenSystemStore @ 0x1404FB6B8 (BcdOpenSystemStore.c)
 * Callees:
 *     _wcsnicmp @ 0x140144480 (_wcsnicmp.c)
 *     wcstoul @ 0x1401460B0 (wcstoul.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     BiLoadSystemStore @ 0x1404FACDC (BiLoadSystemStore.c)
 *     BiCloseStore @ 0x1404FADEC (BiCloseStore.c)
 *     BiGetFirmwareType @ 0x1404FB870 (BiGetFirmwareType.c)
 *     BiCleanupLoadedStores @ 0x1404FB8E4 (BiCleanupLoadedStores.c)
 *     BiEnumerateSubKeys @ 0x1404FBA20 (BiEnumerateSubKeys.c)
 *     BiOpenKeyNonBcd @ 0x1404FBCF4 (BiOpenKeyNonBcd.c)
 *     BiIsSystemStore @ 0x1404FCABC (BiIsSystemStore.c)
 *     BiCloseKey @ 0x1404FD274 (BiCloseKey.c)
 *     BiOpenKey @ 0x1404FD5F4 (BiOpenKey.c)
 *     BiBindEfiNamespaceObjects @ 0x14068F23C (BiBindEfiNamespaceObjects.c)
 */

__int64 __fastcall BiOpenSystemStore(_QWORD *a1, unsigned int a2)
{
  _QWORD *v2; // r12
  HANDLE v3; // rdi
  int v4; // r13d
  int v5; // ebx
  int v6; // eax
  const wchar_t **v7; // r14
  __int64 v8; // rbx
  bool v9; // zf
  int v10; // eax
  int v11; // eax
  int v13; // eax
  int v14; // eax
  PVOID P[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v17; // [rsp+78h] [rbp+40h] BYREF
  HANDLE v18; // [rsp+80h] [rbp+48h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+50h] BYREF

  v17 = a2;
  *a1 = 0LL;
  v2 = a1;
  Handle = 0LL;
  v3 = 0LL;
  P[0] = 0LL;
  v18 = 0LL;
  v4 = 0;
  BiCleanupLoadedStores(0LL);
  v5 = BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 983103LL, &Handle);
  if ( v5 < 0 )
    goto LABEL_16;
  v6 = BiEnumerateSubKeys(Handle, P, &v17);
  v7 = (const wchar_t **)P[0];
  v5 = v6;
  if ( v6 < 0 )
    goto LABEL_14;
  v8 = 0LL;
  v9 = v17 == 0;
  if ( !v17 )
    goto LABEL_7;
  do
  {
    if ( wcsnicmp(v7[v8], L"BCD", 3uLL) )
      goto LABEL_5;
    if ( wcstoul(v7[v8] + 3, 0LL, 10) == -1 )
      goto LABEL_5;
    v13 = BiOpenKey(Handle, v7[v8], 131097LL, &v18);
    v3 = v18;
    if ( v13 < 0 )
      goto LABEL_5;
    if ( (unsigned __int8)BiIsSystemStore(v18) )
      break;
    BiCloseKey(v3);
LABEL_5:
    v8 = (unsigned int)(v8 + 1);
  }
  while ( (unsigned int)v8 < v17 );
  v2 = a1;
  v9 = (_DWORD)v8 == v17;
LABEL_7:
  if ( !v9 )
  {
LABEL_10:
    v11 = BiGetFirmwareType() - 1;
    if ( v11 )
    {
      v14 = v11 - 1;
      if ( v14 )
      {
        if ( v14 == 1 )
        {
          v5 = 0;
LABEL_13:
          *v2 = v3;
          goto LABEL_14;
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
      goto LABEL_28;
    goto LABEL_13;
  }
  v18 = 0LL;
  v10 = BiLoadSystemStore(&v18);
  v3 = v18;
  v5 = v10;
  if ( v10 >= 0 )
  {
    v4 = 1;
    goto LABEL_10;
  }
LABEL_28:
  if ( v3 )
    BiCloseStore(v3, v4 != 0 ? 2 : 0);
LABEL_14:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
LABEL_16:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v5;
}
