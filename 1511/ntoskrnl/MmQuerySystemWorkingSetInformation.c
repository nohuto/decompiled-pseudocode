/*
 * XREFs of MmQuerySystemWorkingSetInformation @ 0x140015C24
 * Callers:
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     MiGetStandbyRepurposed @ 0x14001516C (MiGetStandbyRepurposed.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 */

void __fastcall MmQuerySystemWorkingSetInformation(int a1, __int64 *a2)
{
  LONG *v3; // rdi
  __int64 v4; // rsi
  KIRQL v5; // dl
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 VmPartition; // rax
  int StandbyRepurposed; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx

  *((_DWORD *)a2 + 15) = 0;
  switch ( a1 )
  {
    case 2:
      v3 = &dword_1402FF880;
      break;
    case 3:
      v3 = &dword_1402FF980;
      break;
    case 4:
      v3 = &dword_1402FFA80;
      break;
    default:
      return;
  }
  v4 = (unsigned int)(a1 - 2);
  v5 = ExAcquireSpinLockShared(v3);
  *a2 = *((_QWORD *)v3 + 13);
  a2[1] = *((_QWORD *)v3 + 21);
  *((_DWORD *)a2 + 4) = v3[49];
  a2[3] = *((_QWORD *)v3 + 12);
  a2[4] = *((_QWORD *)v3 + 17);
  if ( *((char *)v3 + 216) < 0 )
    *((_DWORD *)a2 + 15) |= 4u;
  if ( (v3[54] & 0x40) != 0 )
    *((_DWORD *)a2 + 15) |= 1u;
  a2[6] = qword_1402FEF48[v4];
  ExReleaseSpinLockShared(v3, v5);
  VmPartition = MiGetVmPartition(v3, v6, v7);
  StandbyRepurposed = MiGetStandbyRepurposed(VmPartition, 1u);
  v10 = *a2;
  *((_DWORD *)a2 + 14) = StandbyRepurposed;
  v11 = v10 + qword_1402FEF40;
  if ( v10 + qword_1402FEF40 > (unsigned __int64)a2[6] )
    v11 = a2[6];
  a2[1] <<= 12;
  *a2 = v10 << 12;
  a2[5] = v11;
}
