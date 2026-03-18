/*
 * XREFs of PsRootSiloInformation @ 0x14063FBD4
 * Callers:
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PsIsSiloInSilo @ 0x1401F5850 (PsIsSiloInSilo.c)
 *     PsGetCurrentSilo @ 0x1404D436C (PsGetCurrentSilo.c)
 *     PspGetNextSilo @ 0x1405269DC (PspGetNextSilo.c)
 *     PspQuitNextJob @ 0x140643908 (PspQuitNextJob.c)
 */

__int64 __fastcall PsRootSiloInformation(_DWORD *a1, unsigned int a2, unsigned int *a3)
{
  unsigned __int64 v3; // r12
  unsigned int v5; // ebx
  void *CurrentSilo; // r15
  int v8; // esi
  int v9; // edi
  __int64 *i; // rcx
  __int64 *NextSilo; // rax
  __int64 v12; // r8

  v3 = a2;
  v5 = 4;
  if ( a2 < 4 )
    return 3221225507LL;
  CurrentSilo = PsGetCurrentSilo();
  v8 = 0;
  v9 = 0;
  for ( i = 0LL; ; i = (__int64 *)v12 )
  {
    NextSilo = PspGetNextSilo(i, 0);
    if ( !NextSilo )
      break;
    if ( PsIsSiloInSilo((__int64)NextSilo, (__int64)CurrentSilo) )
    {
      if ( (unsigned __int64)v5 + 16 > v3 )
      {
        v9 = -1073741789;
        PspQuitNextJob(v12);
        break;
      }
      *(_OWORD *)&a1[4 * v8 + 1] = *(_OWORD *)(v12 + 1232);
      v5 += 16;
      ++v8;
    }
  }
  if ( CurrentSilo )
    ObfDereferenceObject(CurrentSilo);
  if ( v9 >= 0 )
  {
    *a1 = v8;
    *a3 = v5;
  }
  return (unsigned int)v9;
}
