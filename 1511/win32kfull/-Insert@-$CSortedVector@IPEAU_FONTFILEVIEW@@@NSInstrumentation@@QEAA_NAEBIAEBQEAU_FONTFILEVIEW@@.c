/*
 * XREFs of ?Insert@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@@Z @ 0x1C02A2F94
 * Callers:
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C02A3DCC (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 *     ?LowerBound@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEBA_KAEBI@Z @ 0x1C025CC8C (-LowerBound@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEBA_KAEBI@Z.c)
 *     ?ReAllocate@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@AEAA_N_K@Z @ 0x1C02A3168 (-ReAllocate@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@AEAA_N_K@Z.c)
 *     ?AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C02D4EF0 (-AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ @ 0x1C02D4F30 (-Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ.c)
 */

char __fastcall NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Insert(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  volatile signed __int32 *v3; // rdi
  char v5; // si
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r8

  v3 = (volatile signed __int32 *)UmfdFileviewLookup;
  NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive((NSInstrumentation::CPlatformReaderWriterLock *)UmfdFileviewLookup);
  v5 = 1;
  _InterlockedCompareExchange(v3 + 4, 0, 1);
  _InterlockedAdd(v3 + 7, 1u);
  if ( *((_DWORD *)v3 + 6) )
    NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPlatformSingleWatierSignal *)(v3 + 2));
  v6 = NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LowerBound((__int64)v3, &g_UmfdFileViewKey);
  v7 = *((_QWORD *)v3 + 5);
  v8 = v6;
  if ( v6 < v7 && (v9 = *((_QWORD *)v3 + 6), *(_DWORD *)(v9 + 16 * v6) == g_UmfdFileViewKey) )
  {
    *(_QWORD *)(v9 + 16 * v6 + 8) = *a3;
  }
  else
  {
    v10 = *((_QWORD *)v3 + 4);
    if ( v7 != v10
      || (unsigned __int8)NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::ReAllocate(v3, 2 * v10) )
    {
      v11 = 16 * v8;
      memmove(
        (void *)(16 * v8 + *((_QWORD *)v3 + 6) + 16),
        (const void *)(16 * v8 + *((_QWORD *)v3 + 6)),
        16 * (*((_QWORD *)v3 + 5) - v8));
      v12 = *((_QWORD *)v3 + 6);
      *(_DWORD *)(v11 + v12) = g_UmfdFileViewKey;
      *(_QWORD *)(v11 + v12 + 8) = *a3;
      ++*((_QWORD *)v3 + 5);
    }
    else
    {
      v5 = 0;
    }
  }
  _InterlockedDecrement(v3 + 7);
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v5;
}
