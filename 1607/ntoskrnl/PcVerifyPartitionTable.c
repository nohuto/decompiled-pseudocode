/*
 * XREFs of PcVerifyPartitionTable @ 0x14023B670
 * Callers:
 *     IopCreateArcName @ 0x1405501C4 (IopCreateArcName.c)
 *     IoVerifyPartitionTable @ 0x140620180 (IoVerifyPartitionTable.c)
 * Callees:
 *     ??1PC_DISK@@QEAA@XZ @ 0x140147B14 (--1PC_DISK@@QEAA@XZ.c)
 *     ?Initialize@PC_DISK@@QEAAJPEAX@Z @ 0x140147B2C (-Initialize@PC_DISK@@QEAAJPEAX@Z.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ?VerifyPartitionTable@PC_GPT@@QEAAJE@Z @ 0x14023C4F0 (-VerifyPartitionTable@PC_GPT@@QEAAJE@Z.c)
 */

__int64 __fastcall PcVerifyPartitionTable(struct _DEVICE_OBJECT *a1, unsigned __int8 a2, __int64 a3, unsigned int a4)
{
  int v5; // ebx
  _BYTE *v7; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v8[44]; // [rsp+28h] [rbp-50h] BYREF
  int v9; // [rsp+54h] [rbp-24h]
  __int64 v10; // [rsp+58h] [rbp-20h]

  v10 = 0LL;
  v5 = PC_DISK::Initialize((PC_DISK *)v8, a1, a3, a4);
  if ( v5 >= 0 )
  {
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        v7 = v8;
        v5 = PC_GPT::VerifyPartitionTable((PC_GPT *)&v7, a2);
      }
      else
      {
        v5 = -1073741637;
      }
    }
    else
    {
      v5 = 0;
    }
  }
  PC_DISK::~PC_DISK((PC_DISK *)v8);
  return (unsigned int)v5;
}
