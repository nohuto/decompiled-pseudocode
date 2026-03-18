/*
 * XREFs of ?GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z @ 0x1C01DAF68
 * Callers:
 *     ?ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z @ 0x1C01DABE0 (-ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z.c)
 * Callees:
 *     FeedbackGetWindowSetting @ 0x1C01DB828 (FeedbackGetWindowSetting.c)
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01FC1E4 (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 */

__int64 __fastcall Feedback::GetWindowBarrelVisualizationSetting(Feedback *this, const struct tagPOINTER_INFO *a2)
{
  unsigned int v3; // ebx
  struct tagINPUTPOINTERNODE *NodeById; // rax
  int v5; // ecx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  struct tagINPUTPOINTERNODE *v9; // rax
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = 1;
  if ( (_DWORD)a2 )
    goto LABEL_8;
  NodeById = FindNodeById(*((_WORD *)this + 2), 0, 0);
  if ( NodeById )
  {
    v6 = *((_DWORD *)NodeById + 38);
    if ( (v6 & 0x800) == 0 )
      goto LABEL_8;
    v5 = (v6 & 0x400) != 0 ? 1 : -1;
  }
  else
  {
    v5 = 1;
  }
  if ( (*((_DWORD *)this + 3) & 0x10000) == 0 )
    return v5 == 1;
LABEL_8:
  v7 = *((_QWORD *)this + 3);
  if ( v7 )
  {
    v8 = ValidateHwnd(v7);
    if ( v8 )
    {
      v11 = 1;
      if ( (unsigned int)FeedbackGetWindowSetting(v8, 2LL, 1LL, &v11) )
        v3 = v11;
    }
  }
  v9 = FindNodeById(*((_WORD *)this + 2), 1, 0);
  if ( v9 )
    *((_DWORD *)v9 + 38) = *((_DWORD *)v9 + 38) & 0xFFFFFBFF | ((v3 & 1 | 2) << 10);
  return v3;
}
