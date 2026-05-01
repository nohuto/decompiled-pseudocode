/*
 * XREFs of ??0ResourceSet@ExecutionModel@@AEAA@XZ @ 0x180010C70
 * Callers:
 *     ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJPEAPEAVBaseResourceSet@2@@Z @ 0x18000CED0 (-ResourceSetFactory@ResourceSet@ExecutionModel@@CAJPEAPEAVBaseResourceSet@2@@Z.c)
 * Callees:
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x18000E3D0 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 */

ExecutionModel::ResourceSet *__fastcall ExecutionModel::ResourceSet::ResourceSet(ExecutionModel::ResourceSet *this)
{
  char *v2; // rcx
  int v3; // edx
  _DWORD *v4; // rdi
  __int64 v5; // rcx

  ExecutionModel::BaseResourceSet::BaseResourceSet(this);
  *((_DWORD *)this + 344) = 3;
  *(_QWORD *)this = &ExecutionModel::ResourceSet::`vftable'{for `ExecutionModel::BaseResourceSet'};
  v2 = (char *)this + 1472;
  *((_QWORD *)this + 171) = &ExecutionModel::ResourceSet::`vftable'{for `ExecutionModel::IResourceSet'};
  *((_QWORD *)this + 175) = 0LL;
  *((_DWORD *)this + 352) = -1;
  *((_DWORD *)this + 353) = 0;
  v3 = 2;
  *((_DWORD *)this + 354) = -1;
  *((_DWORD *)this + 355) = 101;
  *((_DWORD *)this + 356) = 32;
  *((_DWORD *)this + 360) = 0;
  *((_QWORD *)this + 181) = 0LL;
  *((_QWORD *)this + 182) = 0LL;
  *((_DWORD *)this + 366) = 0;
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
  *((_QWORD *)this + 217) = 0LL;
  v4 = (_DWORD *)((char *)this + 1544);
  *((_QWORD *)this + 218) = 0LL;
  *((_DWORD *)this + 374) = 1;
  v5 = 48LL;
  *((_DWORD *)this + 368) = 0;
  *((_DWORD *)this + 380) = 2;
  while ( v5 )
  {
    *v4++ = 101;
    --v5;
  }
  *((_DWORD *)this + 439) = 0;
  *((_WORD *)this + 716) = 0;
  *((_BYTE *)this + 1434) = 0;
  *((_DWORD *)this + 359) = 1;
  *((_DWORD *)this + 357) = 0;
  *((_QWORD *)this + 220) = 0LL;
  *((_QWORD *)this + 221) = 0LL;
  *((_QWORD *)this + 225) = 0LL;
  *((_QWORD *)this + 226) = 0LL;
  *((_QWORD *)this + 227) = 0LL;
  *((_QWORD *)this + 228) = 0LL;
  *((_DWORD *)this + 458) = 0;
  *((_QWORD *)this + 230) = 0LL;
  *((_QWORD *)this + 231) = 0LL;
  *((_QWORD *)this + 232) = (char *)this + 1856;
  *((_QWORD *)this + 233) = (char *)this + 1856;
  *((_QWORD *)this + 234) = 0LL;
  *((_QWORD *)this + 235) = (char *)this + 1880;
  *((_QWORD *)this + 236) = (char *)this + 1880;
  *((_QWORD *)this + 237) = 0LL;
  *((_QWORD *)this + 238) = 0LL;
  *((_QWORD *)this + 222) = 0LL;
  *((_QWORD *)this + 223) = 0LL;
  *((_QWORD *)this + 224) = 0LL;
  *((_BYTE *)this + 1912) = 4;
  *((_QWORD *)this + 173) = 0LL;
  *((_QWORD *)this + 174) = 0LL;
  return this;
}
