/*
 * XREFs of ArbArbiterHandler @ 0x14059E62C
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall ArbArbiterHandler(__int64 a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // eax
  unsigned int v8; // edi
  struct _KTHREAD *v9; // rcx
  __int16 v10; // ax
  struct _KEVENT *v12; // rcx
  struct _KEVENT *v13; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
  if ( a2 > 5 )
  {
    if ( a2 == 6 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 200))(a1, a3);
      goto LABEL_10;
    }
    if ( a2 == 7 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 192))(a1, a3);
      goto LABEL_10;
    }
    if ( a2 != 8 )
    {
      if ( a2 == 9 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 184))(a1, a3);
        goto LABEL_10;
      }
      goto LABEL_23;
    }
LABEL_24:
    v8 = -1073741822;
    goto LABEL_14;
  }
  if ( a2 >= 4 )
    goto LABEL_24;
  if ( !a2 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 152))(a1, a3);
    goto LABEL_10;
  }
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(a1 + 168))(a1);
      goto LABEL_10;
    }
    if ( a2 == 3 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(a1 + 176))(a1);
      goto LABEL_10;
    }
LABEL_23:
    v8 = -1073741811;
    goto LABEL_14;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 160))(a1, a3);
LABEL_10:
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( (unsigned int)a2 <= 1 )
    {
      v13 = *(struct _KEVENT **)(a1 + 296);
      *(_BYTE *)(a1 + 288) = 1;
      KeResetEvent(v13);
    }
    else if ( (unsigned int)(a2 - 2) <= 1 )
    {
      v12 = *(struct _KEVENT **)(a1 + 296);
      *(_BYTE *)(a1 + 288) = 0;
      KeSetEvent(v12, 0, 0);
    }
  }
LABEL_14:
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  v9 = KeGetCurrentThread();
  v10 = v9->KernelApcDisable + 1;
  v9->KernelApcDisable = v10;
  if ( !v10
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v9->ApcState.ApcListHead[0].Flink != &v9->152
    && !v9->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v8;
}
