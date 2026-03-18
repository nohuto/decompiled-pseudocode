/*
 * XREFs of ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C017B080
 * Callers:
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C0182190 (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 *     ?ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C0182B84 (-ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C006FE40 (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::AcquireCPU(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        union _LARGE_INTEGER *a4,
        __int64 a5,
        int a6)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 result; // rax
  size_t v13; // [rsp+30h] [rbp-18h]

  if ( a5 && !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v8 + 24) = 608LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !*(_DWORD *)(a1 + 24LL * a6 + 24) )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v9 + 24) = 613LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( *(_QWORD *)(a1 + 24LL * a6 + 40) != PsGetCurrentProcess(a1) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v11 + 24) = 614LL;
    WdLogEvent5_WdAssertion(v11);
  }
  LODWORD(v13) = 0;
  result = DXGKEYEDMUTEX::AcquireSync(
             *(unsigned int *)(a1 + 24LL * a6 + 24),
             0LL,
             1,
             a4,
             (unsigned __int64 *)(a1 + 120),
             0LL,
             v13,
             (unsigned __int64 *)(a1 + 144));
  if ( (int)result >= 0 && (_DWORD)result != 258 )
  {
    *(_QWORD *)(a1 + 128) = a5;
    result = 0LL;
    *(_DWORD *)(a1 + 136) = 1;
  }
  return result;
}
