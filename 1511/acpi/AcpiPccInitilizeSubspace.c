/*
 * XREFs of AcpiPccInitilizeSubspace @ 0x1C007BFB0
 * Callers:
 *     ACPIPccLegacyInitialize @ 0x1C0066054 (ACPIPccLegacyInitialize.c)
 *     ACPIPccInitialize @ 0x1C007BC84 (ACPIPccInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiPccInitilizeSubspace(char *DeferredContext)
{
  char v2; // cl
  int v3; // edi
  unsigned int v4; // ebx
  int MemoryCachingRequirements; // eax
  int v6; // ecx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  bool v9; // sf
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rax
  int v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = DeferredContext[80];
  if ( (unsigned __int8)v2 >= 2u
    || v2 == 1 && (unsigned __int8)DeferredContext[83] > 0x20u
    || (*((_QWORD *)DeferredContext + 8) & *((_QWORD *)DeferredContext + 7)) != 0LL )
  {
    goto LABEL_2;
  }
  v4 = 516;
  if ( !v2 )
  {
    MemoryCachingRequirements = HalGetMemoryCachingRequirements(
                                  *(_QWORD *)(DeferredContext + 84),
                                  (unsigned __int64)(unsigned __int8)DeferredContext[83] >> 3,
                                  &v15);
    v6 = v15;
    v7 = 516LL;
    v8 = (unsigned __int8)DeferredContext[83];
    v9 = MemoryCachingRequirements < 0;
    v10 = *(_QWORD *)(DeferredContext + 84);
    if ( v9 )
      v6 = 0;
    *((_QWORD *)DeferredContext + 9) = v10;
    v15 = v6;
    if ( v6 == 1 )
      v7 = 4LL;
    v11 = MmMapIoSpaceEx(v10, v8 >> 3, v7);
    *(_QWORD *)(DeferredContext + 84) = v11;
    if ( !v11 )
      goto LABEL_2;
  }
  v3 = HalGetMemoryCachingRequirements(*((_QWORD *)DeferredContext + 12), *((unsigned int *)DeferredContext + 26), &v15);
  if ( v3 >= 0 )
  {
    v12 = v15;
  }
  else
  {
    v12 = 0;
    v3 = 0;
    v15 = 0;
  }
  if ( v12 == 1 )
    v4 = 4;
  v13 = MmMapIoSpaceEx(*((_QWORD *)DeferredContext + 12), *((unsigned int *)DeferredContext + 26), v4);
  if ( v13 )
  {
    *((_QWORD *)DeferredContext + 4) = v13;
    KeInitializeDpc((PRKDPC)DeferredContext + 7, (PKDEFERRED_ROUTINE)AcpiPccCallbackDpc, DeferredContext);
    KeSetImportanceDpc((PRKDPC)DeferredContext + 7, MediumHighImportance);
    KeInitializeDpc((PRKDPC)DeferredContext + 6, (PKDEFERRED_ROUTINE)AcpiPccWatchdog, DeferredContext);
    KeSetImportanceDpc((PRKDPC)DeferredContext + 6, MediumHighImportance);
    KeInitializeDpc((PRKDPC)(DeferredContext + 248), (PKDEFERRED_ROUTINE)AcpiPccRingDoorbell, DeferredContext);
    KeSetImportanceDpc((PRKDPC)(DeferredContext + 248), MediumHighImportance);
    KeInitializeTimer((PKTIMER)DeferredContext + 5);
    KeInitializeTimer((PKTIMER)(DeferredContext + 184));
    KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 65);
    *((_QWORD *)DeferredContext + 15) = DeferredContext + 112;
    *((_QWORD *)DeferredContext + 14) = DeferredContext + 112;
  }
  else
  {
LABEL_2:
    v3 = -1073741823;
    *(_DWORD *)DeferredContext = *(_DWORD *)DeferredContext & 0xFFFFFFC3 | 4;
  }
  return (unsigned int)v3;
}
