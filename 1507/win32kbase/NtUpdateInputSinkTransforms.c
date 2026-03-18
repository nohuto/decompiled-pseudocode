/*
 * XREFs of NtUpdateInputSinkTransforms @ 0x1C00200A0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000EA40 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0013050 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z @ 0x1C0020840 (-LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0021ED0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 */

__int64 __fastcall NtUpdateInputSinkTransforms(__int64 a1, unsigned int a2)
{
  __int64 v4; // r8
  int v5; // ebx
  __int64 i; // rdi
  ULONG64 v7; // rdx
  __int128 v8; // xmm3
  __int128 v9; // xmm4
  __int128 v10; // xmm1
  __int64 v11; // xmm0_8
  CInputSink *v12; // rcx
  CInputSink *v14; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v15[72]; // [rsp+30h] [rbp-78h]
  PVOID Object; // [rsp+C8h] [rbp+20h] BYREF

  if ( UserIsCurrentProcessDwm() )
  {
    v5 = 0;
    for ( i = 0LL; v5 >= 0 && (unsigned int)i < a2; i = (unsigned int)(i + 1) )
    {
      v7 = a1 + 72 * i;
      if ( v7 + 72 < v7 || v7 + 72 > MmUserProbeAddress )
        v7 = MmUserProbeAddress;
      v8 = *(_OWORD *)(v7 + 16);
      v9 = *(_OWORD *)(v7 + 32);
      v10 = *(_OWORD *)(v7 + 48);
      v11 = *(_QWORD *)(v7 + 64);
      *(_OWORD *)v15 = *(_OWORD *)v7;
      *(_OWORD *)&v15[16] = v8;
      *(_OWORD *)&v15[32] = v9;
      *(_OWORD *)&v15[48] = v10;
      *(_QWORD *)&v15[64] = v11;
      LOBYTE(v4) = 1;
      v5 = CompositionInputObject::ResolveHandle(*(void **)v15, 2LL, v4, (struct CompositionInputObject **)&Object);
      if ( v5 >= 0 )
      {
        if ( (int)CompositionInputObject::LockForWrite(Object, &v14) >= 0 )
        {
          v12 = v14;
          *(_OWORD *)((char *)v14 + 88) = *(_OWORD *)&v15[8];
          *(_OWORD *)((char *)v12 + 104) = *(_OWORD *)&v15[24];
          *(_OWORD *)((char *)v12 + 120) = *(_OWORD *)&v15[40];
          *(_OWORD *)((char *)v12 + 136) = *(_OWORD *)&v15[56];
          CInputSink::UnlockAndRelease(v12);
        }
        ObfDereferenceObject(Object);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v5;
}
