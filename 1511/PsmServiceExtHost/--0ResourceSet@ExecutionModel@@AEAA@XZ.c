/*
 * XREFs of ??0ResourceSet@ExecutionModel@@AEAA@XZ @ 0x18000EE30
 * Callers:
 *     ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJPEAPEAVBaseResourceSet@2@@Z @ 0x18000A140 (-ResourceSetFactory@ResourceSet@ExecutionModel@@CAJPEAPEAVBaseResourceSet@2@@Z.c)
 * Callees:
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

ExecutionModel::ResourceSet *__fastcall ExecutionModel::ResourceSet::ResourceSet(ExecutionModel::ResourceSet *this)
{
  char *v2; // rax
  int v3; // ecx
  int v4; // eax
  char *v5; // rcx
  int v6; // edx
  _DWORD *v7; // rdi
  __int64 v8; // rcx

  *(_QWORD *)this = &ExecutionModel::BaseResourceSet::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 6) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = (char *)this + 48;
  *((_QWORD *)this + 5) = (char *)this + 48;
  *((_WORD *)this + 24) = 0;
  *(_QWORD *)((char *)this + 132) = 0LL;
  *((_DWORD *)this + 38) = -1;
  *((_DWORD *)this + 39) = 1;
  *((_QWORD *)this + 20) = (char *)this + 160;
  *((_QWORD *)this + 21) = (char *)this + 160;
  *((_QWORD *)this + 22) = 0LL;
  v2 = (char *)this + 192;
  *((_QWORD *)this + 23) = 0LL;
  v3 = 47;
  do
  {
    --v3;
    *(_DWORD *)v2 = -1;
    *((_QWORD *)v2 + 1) = 0LL;
    *((_DWORD *)v2 + 4) = 101;
    *((_WORD *)v2 + 10) = 0;
    v2 += 24;
  }
  while ( v3 >= 0 );
  v4 = *((_DWORD *)this + 339);
  *((_QWORD *)this + 168) = 0LL;
  *((_DWORD *)this + 338) = 0;
  *((_DWORD *)this + 340) = 101;
  *((_DWORD *)this + 339) = v4 & 0xFFFFFFF8 | 2;
  memset_0((char *)this + 64, 0, 0x44uLL);
  *((_DWORD *)this + 344) = 2;
  *(_QWORD *)this = &ExecutionModel::ResourceSet::`vftable'{for `ExecutionModel::BaseResourceSet'};
  v5 = (char *)this + 1480;
  *((_QWORD *)this + 175) = 0LL;
  *((_QWORD *)this + 171) = &ExecutionModel::ResourceSet::`vftable'{for `ExecutionModel::IResourceSet'};
  v6 = 2;
  *((_DWORD *)this + 352) = -1;
  *((_DWORD *)this + 353) = 0;
  *((_DWORD *)this + 354) = -1;
  *((_DWORD *)this + 355) = 101;
  *((_DWORD *)this + 356) = 32;
  *((_DWORD *)this + 360) = 0;
  *((_QWORD *)this + 182) = 0LL;
  *((_QWORD *)this + 183) = 0LL;
  *((_DWORD *)this + 368) = 0;
  do
  {
    --v6;
    *(_DWORD *)v5 = -1;
    *((_QWORD *)v5 + 1) = 0LL;
    *((_DWORD *)v5 + 4) = 101;
    *((_WORD *)v5 + 10) = 0;
    v5 += 24;
  }
  while ( v6 >= 0 );
  *((_QWORD *)this + 218) = 0LL;
  v7 = (_DWORD *)((char *)this + 1552);
  *((_QWORD *)this + 219) = 0LL;
  *((_DWORD *)this + 370) = 0;
  v8 = 48LL;
  *((_DWORD *)this + 376) = 1;
  *((_DWORD *)this + 382) = 2;
  while ( v8 )
  {
    *v7++ = 101;
    --v8;
  }
  *((_DWORD *)this + 441) = 0;
  *((_WORD *)this + 716) = 0;
  *((_BYTE *)this + 1434) = 0;
  *((_QWORD *)this + 181) = 0LL;
  *((_DWORD *)this + 359) = 1;
  *((_DWORD *)this + 357) = 0;
  *((_QWORD *)this + 221) = 0LL;
  *((_QWORD *)this + 222) = 0LL;
  *((_QWORD *)this + 226) = 0LL;
  *((_QWORD *)this + 227) = 0LL;
  *((_QWORD *)this + 228) = 0LL;
  *((_QWORD *)this + 229) = 0LL;
  *((_DWORD *)this + 460) = 0;
  *((_QWORD *)this + 231) = 0LL;
  *((_QWORD *)this + 232) = 0LL;
  *((_QWORD *)this + 233) = (char *)this + 1864;
  *((_QWORD *)this + 234) = (char *)this + 1864;
  *((_QWORD *)this + 235) = 0LL;
  *((_QWORD *)this + 236) = (char *)this + 1888;
  *((_QWORD *)this + 237) = (char *)this + 1888;
  *((_QWORD *)this + 238) = 0LL;
  *((_QWORD *)this + 239) = 0LL;
  *((_QWORD *)this + 223) = 0LL;
  *((_QWORD *)this + 224) = 0LL;
  *((_QWORD *)this + 225) = 0LL;
  *((_BYTE *)this + 1920) = 4;
  *((_QWORD *)this + 173) = 0LL;
  *((_QWORD *)this + 174) = 0LL;
  return this;
}
