/*
 * XREFs of PspCreatePicoProcess @ 0x140681688
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockProcessExclusive @ 0x1400F0128 (PspUnlockProcessExclusive.c)
 *     PspLockProcessExclusive @ 0x14010D1A8 (PspLockProcessExclusive.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     PsCreateMinimalProcess @ 0x14057E7B8 (PsCreateMinimalProcess.c)
 */

__int64 __fastcall PspCreatePicoProcess(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r13
  int v3; // edi
  PVOID v5; // r14
  NTSTATUS v6; // ebx
  void *v7; // rcx
  int v8; // eax
  int v9; // eax
  HANDLE v10; // rdi
  _QWORD *v11; // rsi
  PVOID v13; // [rsp+40h] [rbp-10h] BYREF
  PVOID Object; // [rsp+90h] [rbp+40h] BYREF
  _QWORD *v15; // [rsp+98h] [rbp+48h]
  HANDLE Handle; // [rsp+A0h] [rbp+50h] BYREF
  PVOID v17; // [rsp+A8h] [rbp+58h] BYREF

  v15 = a2;
  CurrentThread = KeGetCurrentThread();
  v3 = *(_DWORD *)(a1 + 24);
  v17 = 0LL;
  v5 = 0LL;
  Object = 0LL;
  Handle = 0LL;
  v13 = 0LL;
  if ( (v3 & 0xFFFFFFE0) != 0 || (v3 & 6) != 0 && (v3 & 1) == 0 || !*(_QWORD *)(a1 + 16) )
    return (unsigned int)-1073741811;
  v6 = ObReferenceObjectByHandleWithTag(*(HANDLE *)a1, 0x80u, (POBJECT_TYPE)PsProcessType, 0, 0x72437350u, &Object, 0LL);
  if ( v6 < 0 )
    return (unsigned int)v6;
  v7 = *(void **)(a1 + 8);
  if ( !v7 )
    goto LABEL_10;
  v6 = ObReferenceObjectByHandleWithTag(v7, 9u, (POBJECT_TYPE)SeTokenObjectType, 0, 0x72437350u, &v17, 0LL);
  if ( v6 >= 0 )
  {
    v5 = v17;
LABEL_10:
    v8 = 0;
    if ( (v3 & 1) != 0 )
    {
      v8 = 0x2000;
      if ( (v3 & 2) != 0 )
        v8 = 8196;
      if ( (v3 & 4) != 0 )
        v8 |= 0x4000u;
    }
    if ( (v3 & 8) != 0 )
      v8 |= 1u;
    if ( (v3 & 0x10) != 0 )
      v8 |= 0x10000u;
    v9 = PsCreateMinimalProcess((struct _KPROCESS *)Object, 0LL, 0, v5, v8, 1, &Handle);
    v10 = Handle;
    v6 = v9;
    if ( v9 >= 0 )
    {
      v6 = ObReferenceObjectByHandleWithTag(Handle, 0x80u, (POBJECT_TYPE)PsProcessType, 0, 0x72437350u, &v13, 0LL);
      if ( v6 >= 0 )
      {
        v11 = v13;
        PspLockProcessExclusive((__int64)v13, (__int64)CurrentThread);
        if ( (*((_DWORD *)v11 + 193) & 8) != 0 )
        {
          v6 = -1073741558;
        }
        else
        {
          v11[226] = *(_QWORD *)(a1 + 16);
          *v15 = v10;
          v10 = 0LL;
        }
        PspUnlockProcessExclusive((__int64)v11, (__int64)CurrentThread);
        if ( v6 >= 0 )
          v6 = 0;
        ObfDereferenceObjectWithTag(v11, 0x72437350u);
      }
    }
    if ( v10 )
      ZwClose(v10);
    if ( v5 )
      ObfDereferenceObjectWithTag(v5, 0x72437350u);
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x72437350u);
  return (unsigned int)v6;
}
