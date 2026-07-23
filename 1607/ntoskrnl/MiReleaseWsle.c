/*
 * XREFs of MiReleaseWsle @ 0x1400E02D0
 * Callers:
 *     MiSwapWslEntries @ 0x1400499F0 (MiSwapWslEntries.c)
 *     MiConvertToLinkedWsles @ 0x1400A016C (MiConvertToLinkedWsles.c)
 *     MiTerminateWsle @ 0x1400E0160 (MiTerminateWsle.c)
 *     MiRemoveImagePageFromSystemWorkingSet @ 0x1400FBC70 (MiRemoveImagePageFromSystemWorkingSet.c)
 *     MiMoveWorkingFreeToTail @ 0x1400FBD94 (MiMoveWorkingFreeToTail.c)
 *     MiConvertPrivateToProto @ 0x1401F8734 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiRemoveEntryWsle @ 0x1400E0420 (MiRemoveEntryWsle.c)
 *     MiVolunteerForTrimFirst @ 0x1400E3E30 (MiVolunteerForTrimFirst.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

char __fastcall MiReleaseWsle(ULONG_PTR a1, __int64 a2, unsigned __int64 a3, int a4)
{
  ULONG_PTR *v8; // rdi
  unsigned __int64 *v10; // rdx
  unsigned __int64 v11; // rbx
  int v12; // ebx
  ULONG_PTR v13; // r8
  _QWORD *v14; // rdx
  ULONG_PTR v15; // rax
  int v16; // ecx

  if ( (*(_BYTE *)(a2 + 184) & 7) == 2 )
    v8 = &BugCheckParameter2;
  else
    v8 = (ULONG_PTR *)(*(_QWORD *)(a2 + 16) + 416LL);
  if ( a4 )
  {
    if ( a1 >= v8[1] )
    {
      v10 = (unsigned __int64 *)(v8[10] + a1 * *((unsigned int *)v8 + 8));
      v11 = *v10;
      MiRemoveEntryWsle(a2, v10);
      v12 = (v11 >> 9) & 7;
      if ( v12 )
      {
        --*(_QWORD *)(a2 + 8LL * (unsigned int)(v12 - 1) + 40);
        if ( v12 == 7 )
          MiVolunteerForTrimFirst(a2, -1LL);
      }
    }
  }
  v13 = *v8;
  if ( *v8 != 0xFFFFFFFFFLL )
  {
    if ( v13 < v8[1] || v13 > v8[3] )
      KeBugCheckEx(0x1Au, 0x5004uLL, (ULONG_PTR)v8, *v8, v8[3]);
    v14 = (_QWORD *)(v8[10] + v13 * *((unsigned int *)v8 + 8));
    *v14 ^= (*(_DWORD *)v14 ^ (2 * (_DWORD)a1)) & 0xFFFFFFE;
  }
  v15 = v8[10];
  *(_QWORD *)(a1 * *((unsigned int *)v8 + 8) + v15) = (v13 << 28) | 0xFFFFFFE;
  *v8 = a1;
  if ( a4 )
  {
    --*(_QWORD *)(a2 + 128);
    if ( a3 < 0xFFFFF68000000000uLL || a3 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      --*(_QWORD *)(a2 + 112);
      v16 = 1;
    }
    else
    {
      v16 = 0;
    }
    LOBYTE(v15) = *(_BYTE *)(a2 + 184) & 7;
    if ( (_BYTE)v15 == 2 )
    {
      --qword_140327D48;
      if ( v16 == 1 )
        --qword_140327D50;
    }
  }
  return v15;
}
