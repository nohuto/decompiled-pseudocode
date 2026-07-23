/*
 * XREFs of PiDqActionDataGetRequestedProperties @ 0x14048C8D4
 * Callers:
 *     PiDqActionDataCreate @ 0x14048C2A4 (PiDqActionDataCreate.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1404895F8 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiPnpRtlEndOperation @ 0x1404E440C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1404E46CC (PiPnpRtlBeginOperation.c)
 *     PiDqPnPGetObjectProperty @ 0x1404E4B74 (PiDqPnPGetObjectProperty.c)
 *     PiDqOpenObjectRegKey @ 0x140631DB0 (PiDqOpenObjectRegKey.c)
 */

__int64 __fastcall PiDqActionDataGetRequestedProperties(
        __int64 a1,
        int a2,
        int a3,
        char a4,
        const wchar_t *a5,
        __int64 a6,
        unsigned int a7,
        _QWORD *a8,
        _DWORD *a9)
{
  int v9; // ebx
  int v10; // r15d
  PVOID PoolWithTag; // rax
  unsigned int v12; // ebp
  __int64 v13; // rsi
  int v14; // r8d
  _DWORD *v15; // rdi
  int v16; // r9d
  int v17; // eax
  __int128 v19; // xmm1
  HANDLE Handle; // [rsp+50h] [rbp-48h] BYREF
  PVOID P[8]; // [rsp+58h] [rbp-40h] BYREF

  v9 = 0;
  Handle = 0LL;
  v10 = a2;
  P[0] = 0LL;
  *a9 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 48LL * a7, 0x58706E50u);
  *a8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = -1073741670;
    goto LABEL_10;
  }
  PiPnpRtlBeginOperation(P);
  v12 = 0;
  if ( !a7 )
    goto LABEL_10;
  v13 = a6 + 20;
  while ( 1 )
  {
    v14 = 0;
    v15 = (_DWORD *)(*a8 + 48LL * (unsigned int)*a9);
    if ( !*(_DWORD *)v13 )
      goto LABEL_5;
    if ( *(_DWORD *)v13 != 1 )
      break;
    v10 = 0;
    if ( !Handle )
    {
      v9 = PiDqOpenObjectRegKey(1, a3, a2, 1, 0, a1, (__int64)&Handle);
      if ( v9 == -1073741772 )
      {
        v9 = 0;
        Handle = (HANDLE)-1LL;
      }
    }
    if ( Handle == (HANDLE)-1LL )
    {
      *(_OWORD *)v15 = *(_OWORD *)(v13 - 20);
      v19 = *(_OWORD *)(v13 - 4);
      v15[8] = 0;
      *((_QWORD *)v15 + 5) = 0LL;
      v15[9] = 0;
      *((_OWORD *)v15 + 1) = v19;
      goto LABEL_9;
    }
    v14 = (int)Handle;
LABEL_5:
    if ( v9 < 0 )
      goto LABEL_10;
    v16 = a6 + 32 * v12;
    v17 = a4
        ? PiDqPnPGetObjectPropertyInBestLocale(a3, v10, v14, v16, *(_DWORD *)v13, a5, v15)
        : PiDqPnPGetObjectProperty(a3, v10, v14, v16, *(_DWORD *)v13, *(NTSTRSAFE_PCWSTR *)(v13 + 4), (__int64)v15);
    v9 = v17;
    if ( v17 < 0 )
      goto LABEL_10;
LABEL_9:
    ++*a9;
    ++v12;
    v13 += 32LL;
    if ( v12 >= a7 )
      goto LABEL_10;
    v10 = a2;
  }
  v9 = -1073741811;
LABEL_10:
  if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    ZwClose(Handle);
  if ( P[0] )
    PiPnpRtlEndOperation(P[0]);
  return (unsigned int)v9;
}
