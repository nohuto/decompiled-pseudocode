/*
 * XREFs of PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1406312D0
 * Callers:
 *     PiDqActionDataCreate @ 0x14048C2A4 (PiDqActionDataCreate.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1404895F8 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiDqGrowPropertyArray @ 0x1404CF868 (PiDqGrowPropertyArray.c)
 *     PiDqOpenObjectRegKey @ 0x140631DB0 (PiDqOpenObjectRegKey.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x140632150 (PiDqPnPGetObjectPropertyKeys.c)
 */

__int64 __fastcall PiDqActionDataGetAllPropertiesInBestLanguage(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        const wchar_t *a5,
        const void **a6,
        unsigned int *a7,
        unsigned int *a8)
{
  int v8; // esi
  int v9; // r12d
  void *v10; // rbx
  int v11; // edi
  int v12; // r9d
  unsigned int *v13; // r14
  unsigned int v14; // eax
  const void **v15; // r15
  unsigned int v16; // edx
  unsigned int v17; // r8d
  unsigned int v18; // esi
  const wchar_t *v19; // r13
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF
  void *v22; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v24; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+58h]

  v25 = a4;
  Handle = 0LL;
  v8 = a4;
  v9 = a3;
  v10 = 0LL;
  v22 = 0LL;
  if ( a2 == 1 )
    v9 = 0;
  v11 = PiDqOpenObjectRegKey(a2, a4, a3, 1, 0, a1, (__int64)&Handle);
  if ( v11 >= 0 )
  {
    v11 = PiDqPnPGetObjectPropertyKeys(v8, v9, (_DWORD)Handle, v12, (__int64)&v22, (__int64)&v24);
    if ( v11 >= 0 )
    {
      v13 = a7;
      v14 = v24;
      v15 = a6;
      v16 = *a7;
      v17 = *a7 + v24;
      if ( *a8 < v17 )
      {
        *a8 = v17;
        v11 = PiDqGrowPropertyArray(v15, v16, v17);
        if ( v11 < 0 )
          goto LABEL_13;
        v14 = v24;
      }
      v18 = 0;
      if ( v14 )
      {
        v19 = a5;
        v10 = v22;
        do
        {
          v11 = PiDqPnPGetObjectPropertyInBestLocale(
                  v25,
                  v9,
                  (int)Handle,
                  (unsigned int)v10 + 20 * v18,
                  a2,
                  v19,
                  (char *)*v15 + 48 * *v13);
          if ( v11 < 0 )
            break;
          ++*v13;
          ++v18;
        }
        while ( v18 < v24 );
        goto LABEL_14;
      }
    }
LABEL_13:
    v10 = v22;
  }
LABEL_14:
  if ( Handle )
    ZwClose(Handle);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x58706E50u);
  return (unsigned int)v11;
}
