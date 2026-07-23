/*
 * XREFs of VfHalAllocateMapRegisters @ 0x140707AE4
 * Callers:
 *     <none>
 * Callees:
 *     ADD_MAP_REGISTERS @ 0x140705AB8 (ADD_MAP_REGISTERS.c)
 *     ViAllocateMapRegisterFile @ 0x1407087FC (ViAllocateMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140709738 (ViGetAdapterInformationInternal.c)
 */

__int64 __fastcall VfHalAllocateMapRegisters(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 v5; // rdi
  unsigned int v6; // ebp
  __int64 v8; // rdx
  int MapRegisters; // r14d
  __int64 AdapterInformationInternal; // rsi
  __int64 MapRegisterFile; // rax

  v5 = a3;
  v6 = a2;
  if ( !VfRealHalAllocateMapRegisters )
    return 3221225473LL;
  MapRegisters = VfRealHalAllocateMapRegisters(a1, a2, a3);
  if ( MapRegisters >= 0 )
  {
    LOBYTE(v8) = 1;
    AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v8);
    if ( AdapterInformationInternal )
    {
      if ( (_DWORD)v5 )
      {
        do
        {
          if ( ViDoubleBufferDma
            && !*(_BYTE *)(AdapterInformationInternal + 33)
            && (MapRegisterFile = ViAllocateMapRegisterFile(AdapterInformationInternal, v6)) != 0 )
          {
            *(_QWORD *)(MapRegisterFile + 48) = *a4;
            *a4 = MapRegisterFile;
          }
          else if ( !*a4 )
          {
            *a4 = -559026163LL;
          }
          ADD_MAP_REGISTERS(AdapterInformationInternal, v6, 1);
          a4 += 2;
          --v5;
        }
        while ( v5 );
      }
    }
  }
  return (unsigned int)MapRegisters;
}
