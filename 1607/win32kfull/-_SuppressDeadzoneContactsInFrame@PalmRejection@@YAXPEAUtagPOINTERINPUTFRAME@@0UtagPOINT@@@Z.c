/*
 * XREFs of ?_SuppressDeadzoneContactsInFrame@PalmRejection@@YAXPEAUtagPOINTERINPUTFRAME@@0UtagPOINT@@@Z @ 0x1C02295D0
 * Callers:
 *     ?_SuppressDeadzoneContacts@PalmRejection@@YAXUtagPOINT@@@Z @ 0x1C0229558 (-_SuppressDeadzoneContacts@PalmRejection@@YAXUtagPOINT@@@Z.c)
 * Callees:
 *     ?FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z @ 0x1C01C0B7C (-FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C0FF4 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?TraceLoggingEdgePalmRejection@@YAXUtagPOINT@@0@Z @ 0x1C021DE2C (-TraceLoggingEdgePalmRejection@@YAXUtagPOINT@@0@Z.c)
 */

void __fastcall PalmRejection::_SuppressDeadzoneContactsInFrame(
        PalmRejection *this,
        struct tagPOINTERINPUTFRAME *a2,
        struct tagPOINTERINPUTFRAME *a3,
        struct tagPOINT a4)
{
  int v4; // r14d
  unsigned int v5; // esi
  struct tagPOINT v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdx
  struct tagPOINTERINFONODE *ValidNodeInFrame; // rax
  unsigned __int64 v12; // rdi
  _OWORD v13[3]; // [rsp+20h] [rbp-38h] BYREF
  struct tagPOINT v14; // [rsp+68h] [rbp+10h]

  v4 = 0;
  v5 = 0;
  if ( *((_DWORD *)a2 + 10) )
  {
    v8 = v14;
    do
    {
      v9 = *((_QWORD *)a2 + 11) + 216LL * v5;
      if ( (unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)v9) )
      {
        if ( (*(_DWORD *)(v9 + 68) & 0x10000) != 0
          && (v10 = *(_QWORD *)(v9 + 112),
              v13[0] = *(_OWORD *)(*((_QWORD *)a2 + 13) + 156LL),
              (unsigned int)RIMIsPointInPenDeadzone(v13, v10, a3)) )
        {
          *(_DWORD *)v9 |= 0x1000u;
          v4 = 1;
          v8 = *(struct tagPOINT *)(v9 + 112);
        }
        else if ( this )
        {
          ValidNodeInFrame = FindValidNodeInFrame(this, *(_WORD *)(v9 + 60), 0LL);
          if ( ValidNodeInFrame )
          {
            if ( (*(_DWORD *)ValidNodeInFrame & 0x1000) != 0 )
              *(_DWORD *)v9 |= 0x1000u;
          }
        }
      }
      ++v5;
    }
    while ( v5 < *((_DWORD *)a2 + 10) );
    if ( v4 )
    {
      v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( (unsigned int)v12 - gPalmRejectLastLoggedTelemTime > 0x493E0 )
      {
        TraceLoggingEdgePalmRejection(v8, (struct tagPOINT)a3);
        gPalmRejectLastLoggedTelemTime = v12;
      }
    }
  }
}
