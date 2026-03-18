/*
 * XREFs of NtVisualCaptureBits @ 0x1C00D6540
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0019DA0 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     OpenDwmHandle @ 0x1C0037370 (OpenDwmHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtVisualCaptureBits(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        PVOID Handle,
        HANDLE a9)
{
  PVOID v9; // r14
  PVOID v10; // rsi
  int v13; // eax
  _BYTE *v14; // rbx
  int v15; // edi
  NTSTATUS v16; // eax
  PVOID v17; // r14
  NTSTATUS v18; // eax
  __int64 v19; // r9
  __int64 v20; // r9
  void *v21; // r8
  void *v22; // rdx
  int Object; // [rsp+20h] [rbp-30h]
  int Objecta; // [rsp+20h] [rbp-30h]
  PVOID v26; // [rsp+30h] [rbp-20h] BYREF
  void *v27; // [rsp+38h] [rbp-18h] BYREF
  void *v28; // [rsp+40h] [rbp-10h] BYREF

  v9 = Handle;
  v10 = 0LL;
  v28 = (void *)-1LL;
  v26 = 0LL;
  v27 = (void *)-1LL;
  if ( Handle && a9 )
  {
    v13 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(
            a1,
            (struct DirectComposition::CApplicationChannel **)&v26);
    v14 = v26;
    v15 = v13;
    if ( v13 >= 0 )
    {
      v16 = ObReferenceObjectByHandle(v9, 0x100002u, (POBJECT_TYPE)ExEventObjectType, 1, &Handle, 0LL);
      v17 = Handle;
      v15 = v16;
      if ( v16 >= 0 )
      {
        v18 = ObReferenceObjectByHandle(a9, 6u, MmSectionObjectType, 1, &v26, 0LL);
        v10 = v26;
        v15 = v18;
        if ( v18 >= 0 )
        {
          v15 = OpenDwmHandle(v17, (POBJECT_TYPE)ExEventObjectType, 2u, v19, Object, &v28);
          if ( v15 >= 0 )
            v15 = OpenDwmHandle(v10, MmSectionObjectType, 3u, v20, Objecta, &v27);
        }
      }
      if ( v17 )
        ObfDereferenceObject(v17);
      if ( v10 )
        ObfDereferenceObject(v10);
      if ( v15 >= 0 )
      {
        v21 = v27;
        v22 = v28;
        v14[184] |= 0x80u;
        *((_DWORD *)v14 + 175) = a5;
        v15 = 0;
        *((_DWORD *)v14 + 176) = a6;
        *((_DWORD *)v14 + 177) = a7;
        *((_DWORD *)v14 + 182) = a2;
        *((_DWORD *)v14 + 172) = 27;
        *((_DWORD *)v14 + 173) = a3;
        *((_DWORD *)v14 + 174) = a4;
        *((_QWORD *)v14 + 89) = v22;
        *((_QWORD *)v14 + 90) = v21;
      }
    }
    if ( v14 )
      (**(void (__fastcall ***)(PVOID))v14)(v14);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v15;
}
