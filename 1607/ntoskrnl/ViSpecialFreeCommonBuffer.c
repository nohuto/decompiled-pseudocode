/*
 * XREFs of ViSpecialFreeCommonBuffer @ 0x14070A554
 * Callers:
 *     VfFreeCommonBuffer @ 0x1407072B0 (VfFreeCommonBuffer.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x140705C58 (DECREMENT_COMMON_BUFFERS.c)
 *     ViCheckPadding @ 0x140708D3C (ViCheckPadding.c)
 */

__int64 __fastcall ViSpecialFreeCommonBuffer(
        void (__fastcall *a1)(_QWORD, _QWORD, _QWORD, _QWORD, char),
        __int64 a2,
        void *a3,
        char a4)
{
  unsigned __int16 *v4; // rdi
  KSPIN_LOCK *v6; // rsi
  KIRQL v10; // al
  __int64 i; // rbx
  unsigned __int16 *v12; // rbx
  KIRQL v14; // al
  __int64 v15; // r9
  unsigned __int16 **v16; // r8

  v4 = (unsigned __int16 *)(a2 + 80);
  v6 = (KSPIN_LOCK *)(a2 + 96);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  for ( i = *(_QWORD *)v4; ; i = *((_QWORD *)v12 + 6) )
  {
    v12 = (unsigned __int16 *)(i - 48);
    if ( v4 == v12 + 24 )
    {
      KeReleaseSpinLock(v6, v10);
      v12 = 0LL;
      goto LABEL_6;
    }
    if ( (void *)(*((_QWORD *)v12 + 2) + *v12) == a3 )
      break;
  }
  KeReleaseSpinLock(v6, v10);
LABEL_6:
  if ( !v12 )
    return 0LL;
  ViCheckPadding(*((_QWORD *)v12 + 2), *((_DWORD *)v12 + 1), *((_QWORD *)v12 + 3), *((_DWORD *)v12 + 2));
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  v15 = *((_QWORD *)v12 + 6);
  v16 = (unsigned __int16 **)*((_QWORD *)v12 + 7);
  if ( *(unsigned __int16 **)(v15 + 8) != v12 + 24 || *v16 != v12 + 24 )
    __fastfail(3u);
  *v16 = (unsigned __int16 *)v15;
  *(_QWORD *)(v15 + 8) = v16;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v14);
  memset(a3, 0, *((unsigned int *)v12 + 2));
  a1(*(_QWORD *)(a2 + 16), *((unsigned int *)v12 + 1), *((_QWORD *)v12 + 4), *((_QWORD *)v12 + 2), a4);
  DECREMENT_COMMON_BUFFERS(a2);
  ExFreePoolWithTag(v12, 0);
  return 1LL;
}
