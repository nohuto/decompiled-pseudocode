/*
 * XREFs of AlpcpExposeTokenAttribute @ 0x140449560
 * Callers:
 *     AlpcpExposeAttributes @ 0x140448CF0 (AlpcpExposeAttributes.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     SeCreateClientSecurityEx @ 0x14040E110 (SeCreateClientSecurityEx.c)
 */

char __fastcall AlpcpExposeTokenAttribute(__int64 a1, __int64 a2, PERESOURCE *a3, _DWORD *a4)
{
  __int64 v6; // rax
  __int64 v7; // r8
  PERESOURCE *v8; // rcx
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE v10; // rbx
  int v11; // ecx
  __int64 v12; // rcx
  PERESOURCE *v14; // [rsp+20h] [rbp-88h]
  PERESOURCE v15; // [rsp+28h] [rbp-80h]
  PERESOURCE v16; // [rsp+30h] [rbp-78h]
  char v17[16]; // [rsp+50h] [rbp-58h] BYREF
  PVOID Object; // [rsp+60h] [rbp-48h]
  char v19; // [rsp+B8h] [rbp+10h]

  LODWORD(v6) = *(_DWORD *)(a2 + 40);
  if ( (v6 & 0x80u) != 0LL )
    return v6;
  v6 = *(_QWORD *)(a2 + 136);
  if ( v6 )
  {
    if ( *(int *)(v6 + 36) < 1 )
      return v6;
    v8 = *(PERESOURCE **)(v6 + 48);
    v14 = v8;
    v19 = 0;
    goto LABEL_7;
  }
  v7 = *(_QWORD *)(a2 + 24);
  LOBYTE(v6) = *(_DWORD *)(a1 + 416) & 6;
  if ( (_BYTE)v6 != 2 )
    return v6;
  if ( !v7 )
    return v6;
  v11 = *(_DWORD *)(v7 + 416);
  LOBYTE(v6) = v11 & 6;
  if ( (v11 & 6) != 4 )
    return v6;
  if ( (v11 & 0x400) == 0 )
  {
    v8 = *(PERESOURCE **)(v7 + 80);
    if ( !v8 )
      return v6;
    v14 = *(PERESOURCE **)(v7 + 80);
    v19 = 0;
    LODWORD(v6) = 0;
    goto LABEL_16;
  }
  v12 = *(_QWORD *)(a2 + 32);
  if ( !v12 )
    return v6;
  LODWORD(v6) = SeCreateClientSecurityEx(v12, (int)v7 + 260, 0, (__int64)v17);
  if ( (int)v6 < 0 )
  {
    v8 = v14;
LABEL_16:
    if ( (int)v6 < 0 )
      return v6;
    goto LABEL_7;
  }
  v8 = (PERESOURCE *)Object;
  v14 = (PERESOURCE *)Object;
  v19 = 1;
LABEL_7:
  v16 = v8[3];
  v15 = v8[2];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(v14[6], 1u);
  v10 = v14[7];
  ExReleaseResourceLite(v14[6]);
  KeLeaveCriticalRegion();
  if ( v19 )
    ObfDereferenceObject(Object);
  *a3 = v15;
  LOBYTE(v6) = (_BYTE)v16;
  a3[1] = v16;
  a3[2] = v10;
  *a4 |= 0x8000000u;
  return v6;
}
