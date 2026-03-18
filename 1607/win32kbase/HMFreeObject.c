/*
 * XREFs of HMFreeObject @ 0x1C0038B10
 * Callers:
 *     DestroyMonitor @ 0x1C00760A0 (DestroyMonitor.c)
 *     HMDestroyObject @ 0x1C0076190 (HMDestroyObject.c)
 * Callees:
 *     DesktopFree_0 @ 0x1C0002300 (DesktopFree_0.c)
 *     IsWin32FreePoolImplSupported_0 @ 0x1C0002C18 (IsWin32FreePoolImplSupported_0.c)
 *     Win32FreePoolImpl_0 @ 0x1C0002C20 (Win32FreePoolImpl_0.c)
 *     UnlockObjectAssignment @ 0x1C00155E0 (UnlockObjectAssignment.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     HMUnlockObject @ 0x1C007B2FC (HMUnlockObject.c)
 *     HMCleanupGrantedHandle @ 0x1C00B96B0 (HMCleanupGrantedHandle.c)
 */

__int64 __fastcall HMFreeObject(_QWORD *BaseAddress)
{
  __int64 v1; // rsi
  __int64 v3; // rbx
  char v4; // bp
  __int64 v5; // rax
  char v6; // al
  __int16 v7; // ax
  __int64 v8; // rcx
  void *v10; // rcx
  char v11; // al
  void *v12; // rcx
  void *v13; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  v3 = qword_1C011A128 + dword_1C011A130 * (unsigned int)(unsigned __int16)*(_DWORD *)BaseAddress;
  v4 = *((_BYTE *)&unk_1C00FEE4C + 16 * *(unsigned __int8 *)(v3 + 16));
  if ( (v4 & 2) != 0 )
  {
    v5 = *(_QWORD *)(v3 + 8);
  }
  else if ( (v4 & 1) != 0 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 376LL);
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
    --*(_DWORD *)(v5 + 68);
  --giheCount;
  if ( (*(_BYTE *)(v3 + 17) & 0x20) != 0 )
  {
    HMCleanupGrantedHandle(**(_QWORD **)v3);
    *(_BYTE *)(v3 + 17) &= ~0x20u;
  }
  if ( (v4 & 0x10) != 0 )
  {
    v10 = (void *)BaseAddress[3];
    BaseAddress[3] = 0LL;
    v11 = *(_BYTE *)(v3 + 17);
    v13 = v10;
    if ( (v11 & 0x40) != 0 )
      Win32FreePool();
    else
      DesktopFree_0();
    UnlockObjectAssignment(&v13);
    goto LABEL_13;
  }
  if ( (v4 & 0x40) != 0 )
  {
    RtlFreeHeap(gpvSharedAlloc, 0, BaseAddress);
    goto LABEL_13;
  }
  v6 = *(_BYTE *)(v3 + 16);
  if ( v6 == 19 )
  {
    v12 = *(void **)(*(_QWORD *)v3 + 32LL);
    goto LABEL_32;
  }
  if ( v6 == 22 )
  {
    v1 = *(_QWORD *)(*(_QWORD *)v3 + 16LL);
    v12 = *(void **)(v1 + 32);
LABEL_32:
    ObfDereferenceObject(v12);
    goto LABEL_13;
  }
  if ( (int)IsWin32FreePoolImplSupported_0() >= 0 )
    Win32FreePoolImpl_0();
LABEL_13:
  v7 = *(_WORD *)(v3 + 18) + 1;
  if ( *(_WORD *)(v3 + 18) == 0xFFFE )
    v7 = 1;
  *(_QWORD *)v3 = 0LL;
  *(_QWORD *)(v3 + 8) = 0LL;
  *(_QWORD *)(v3 + 16) = 0LL;
  *(_WORD *)(v3 + 18) = v7;
  v8 = (v3 - qword_1C011A128) / 24;
  if ( (v8 & 1) != 0 )
  {
    *(_QWORD *)v3 = qword_1C011A940;
    qword_1C011A940 = v8;
  }
  else
  {
    *(_QWORD *)v3 = qword_1C011A938;
    qword_1C011A938 = v8;
  }
  if ( !gbInDestroyHandleTableObjects && v1 )
    HMUnlockObject(v1);
  return 1LL;
}
