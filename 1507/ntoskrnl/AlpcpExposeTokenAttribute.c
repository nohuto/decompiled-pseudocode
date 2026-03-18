/*
 * XREFs of AlpcpExposeTokenAttribute @ 0x14047F1D0
 * Callers:
 *     AlpcpReceiveMessage @ 0x14047B8A0 (AlpcpReceiveMessage.c)
 *     AlpcpExposeAttributes @ 0x140480310 (AlpcpExposeAttributes.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     SeCreateClientSecurityEx @ 0x140481510 (SeCreateClientSecurityEx.c)
 */

char __fastcall AlpcpExposeTokenAttribute(__int64 a1, __int64 a2, PERESOURCE *a3, _DWORD *a4)
{
  __int64 v6; // rax
  __int64 v7; // r8
  PERESOURCE *v8; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v10; // rcx
  __int16 v11; // ax
  int v12; // ecx
  __int64 v13; // rcx
  PERESOURCE *v15; // [rsp+20h] [rbp-88h]
  PERESOURCE v16; // [rsp+28h] [rbp-80h]
  PERESOURCE v17; // [rsp+30h] [rbp-78h]
  PERESOURCE v18; // [rsp+38h] [rbp-70h]
  char v19[16]; // [rsp+50h] [rbp-58h] BYREF
  PVOID Object; // [rsp+60h] [rbp-48h]
  char v21; // [rsp+B8h] [rbp+10h]

  LODWORD(v6) = *(_DWORD *)(a2 + 40);
  if ( (v6 & 0x80u) != 0LL )
    return v6;
  v6 = *(_QWORD *)(a2 + 136);
  if ( v6 )
  {
    if ( *(int *)(v6 + 36) < 1 )
      return v6;
    v8 = *(PERESOURCE **)(v6 + 48);
    v15 = v8;
    v21 = 0;
    goto LABEL_12;
  }
  v7 = *(_QWORD *)(a2 + 24);
  LOBYTE(v6) = *(_DWORD *)(a1 + 416) & 6;
  if ( (_BYTE)v6 != 2 )
    return v6;
  if ( !v7 )
    return v6;
  v12 = *(_DWORD *)(v7 + 416);
  LOBYTE(v6) = v12 & 6;
  if ( (v12 & 6) != 4 )
    return v6;
  if ( (v12 & 0x400) == 0 )
  {
    v8 = *(PERESOURCE **)(v7 + 80);
    if ( !v8 )
      return v6;
    v15 = *(PERESOURCE **)(v7 + 80);
    v21 = 0;
    LODWORD(v6) = 0;
    goto LABEL_22;
  }
  v13 = *(_QWORD *)(a2 + 32);
  if ( !v13 )
    return v6;
  LODWORD(v6) = SeCreateClientSecurityEx(v13, v7 + 260, 0LL, v19);
  if ( (int)v6 < 0 )
  {
    v8 = v15;
LABEL_22:
    if ( (int)v6 < 0 )
      return v6;
    goto LABEL_12;
  }
  v8 = (PERESOURCE *)Object;
  v15 = (PERESOURCE *)Object;
  v21 = 1;
LABEL_12:
  v17 = v8[3];
  v16 = v8[2];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(v15[6], 1u);
  v18 = v15[7];
  ExReleaseResourceLite(v15[6]);
  v10 = KeGetCurrentThread();
  v11 = v10->KernelApcDisable + 1;
  v10->KernelApcDisable = v11;
  if ( !v11
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
    && !v10->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v21 )
    ObfDereferenceObject(Object);
  *a3 = v16;
  a3[1] = v17;
  LOBYTE(v6) = (_BYTE)v18;
  a3[2] = v18;
  *a4 |= 0x8000000u;
  return v6;
}
