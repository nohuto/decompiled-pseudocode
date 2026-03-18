/*
 * XREFs of sub_1C005F50C @ 0x1C005F50C
 * Callers:
 *     ??$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z2@Z @ 0x1C005F3AC (--$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall sub_1C005F50C(HANDLE KeyHandle, ULONG Index, _QWORD *a3)
{
  void *v3; // rdi
  void *v7; // rax
  __int64 v8; // rcx
  NTSTATUS v9; // eax
  int v10; // ebx
  __int64 v12; // rax
  ULONG Length; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  Length = 1024;
  *a3 = 0LL;
  while ( 1 )
  {
    operator delete(v3);
    v7 = operator new[](Length, 0x63644356u, PagedPool);
    v3 = v7;
    if ( !v7 )
      break;
    v9 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, v7, Length, &Length);
    v10 = v9;
    if ( v9 != -2147483643 && v9 != -1073741789 )
      goto LABEL_5;
  }
  v12 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v12 + 24) = Length;
  WdLogEvent5_WdError(v12);
  v10 = -1073741801;
LABEL_5:
  if ( v10 < 0 )
    operator delete(v3);
  else
    *a3 = v3;
  return (unsigned int)v10;
}
